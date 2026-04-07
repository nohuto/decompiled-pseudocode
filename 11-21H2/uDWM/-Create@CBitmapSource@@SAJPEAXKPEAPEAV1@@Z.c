/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x180050CBC
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x180050C3C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001A93C (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18001AA4C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$As@UIWICBitmap@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x180050E18 (--$As@UIWICBitmap@@@-$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIWICBi.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180059E1C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct CBitmapSource **a3)
{
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rax
  CBitmapSource *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  enum DXGI_FORMAT v17; // [rsp+28h] [rbp-28h]
  enum DXGI_ALPHA_MODE v18; // [rsp+30h] [rbp-20h]
  struct IWICBitmap *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IBitmapSource *v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v7 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 30),
         a1,
         a2,
         96.0,
         96.0,
         v17,
         v18,
         &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = (unsigned int)v7;
    v16 = 85LL;
  }
  else
  {
    v9 = Microsoft::WRL::ComPtr<IBitmapSource>::As<IWICBitmap>(&v22, &v19);
    v8 = v9;
    if ( v9 < 0 )
    {
      v15 = (unsigned int)v9;
      v16 = 86LL;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              104LL);
      v11 = (CBitmapSource *)v10;
      v20 = v10;
      if ( v10 )
      {
        *(_DWORD *)(v10 + 8) = 1;
        *(_QWORD *)v10 = &CBitmapSource::`vftable';
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 96) = 0LL;
        *(_DWORD *)(v10 + 80) = 0x80000000;
        *(_DWORD *)(v10 + 88) = 0x80000000;
        *(_DWORD *)(v10 + 84) = 0x80000000;
        *(_DWORD *)(v10 + 92) = 0x80000000;
        v6 = (CBaseObject *)v10;
        v20 = v10;
        v12 = CBitmapSource::Initialize((CBaseObject **)v10);
        v8 = v12;
        if ( v12 < 0 )
        {
          v15 = (unsigned int)v12;
          v16 = 91LL;
        }
        else
        {
          v13 = CBitmapSource::Update(v11, v19);
          v8 = v13;
          if ( v13 >= 0 )
          {
            v6 = 0LL;
            *a3 = v11;
            v8 = 0;
            goto LABEL_7;
          }
          v15 = (unsigned int)v13;
          v16 = 93LL;
        }
      }
      else
      {
        v6 = 0LL;
        v8 = -2147024882;
        v15 = 2147942414LL;
        v16 = 89LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)v15);
LABEL_7:
  if ( v6 )
    CBaseObject::Release(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return v8;
}
