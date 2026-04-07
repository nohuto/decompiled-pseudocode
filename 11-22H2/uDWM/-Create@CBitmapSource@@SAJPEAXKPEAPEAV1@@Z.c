/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18003A06C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18003B89C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18003984C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180039958 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ??$As@UIWICBitmap@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003ADB8 (--$As@UIWICBitmap@@@-$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIWICBi.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18004EF0C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct CBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  CBitmapSource *v10; // rbx
  int v11; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-30h]
  enum DXGI_FORMAT v17; // [rsp+28h] [rbp-28h]
  enum DXGI_ALPHA_MODE v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  struct IWICBitmap *v20; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  struct IBitmapSource *v22; // [rsp+78h] [rbp+28h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v6 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a1,
         a2,
         96.0,
         96.0,
         v17,
         v18,
         &v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = (unsigned int)v6;
    v14 = 85LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v13,
      v16);
    goto LABEL_15;
  }
  v8 = Microsoft::WRL::ComPtr<IBitmapSource>::As<IWICBitmap>(&v22, &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 86LL;
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = (CBitmapSource *)v9;
  v19 = v9;
  if ( !v9 )
  {
    v19 = 0LL;
    v7 = -2147024882;
    v13 = 2147942414LL;
    v14 = 89LL;
    goto LABEL_14;
  }
  *(_DWORD *)(v9 + 8) = 1;
  *(_QWORD *)v9 = &CBitmapSource::`vftable';
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 96) = 0LL;
  *(_DWORD *)(v9 + 80) = 0x80000000;
  *(_DWORD *)(v9 + 88) = 0x80000000;
  *(_DWORD *)(v9 + 84) = 0x80000000;
  *(_DWORD *)(v9 + 92) = 0x80000000;
  v19 = v9;
  v11 = CBitmapSource::Initialize((CBitmapSource *)v9);
  if ( v11 < 0 )
  {
    v15 = 91LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v11,
      v16);
    v7 = v11;
LABEL_15:
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v19);
    goto LABEL_7;
  }
  v11 = CBitmapSource::Update(v10, v20);
  if ( v11 < 0 )
  {
    v15 = 93LL;
    goto LABEL_12;
  }
  *a3 = v10;
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return v7;
}
