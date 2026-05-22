/*
 * XREFs of ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74
 * Callers:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E9778 (-CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID3D11Resource@@@@YAXAEAPEAUID3D11Resource@@@Z @ 0x18000BF70 (--$ReleaseInterface@UID3D11Resource@@@@YAXAEAPEAUID3D11Resource@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@CScratchSurface@DirectComposition@@QEAAXXZ @ 0x1800EB914 (-Dispose@CScratchSurface@DirectComposition@@QEAAXXZ.c)
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 */

void __fastcall DirectComposition::CDxDevice::CopySurface(
        DirectComposition::CDxDevice *this,
        struct ID3D11Resource *a2,
        unsigned int a3,
        int a4,
        struct ID3D11Resource *a5,
        const struct tagRECT *a6,
        struct DirectComposition::CScratchSurfaceManager *a7)
{
  struct ID3D11Resource *v8; // rsi
  LONG left; // edx
  DirectComposition::CScratchSurface *v12; // rbx
  LONG top; // r8d
  LONG right; // eax
  LONG bottom; // ecx
  int v16; // eax
  int v17; // ecx
  int ScratchSurface; // eax
  int v19; // r15d
  int v20; // eax
  unsigned int v21; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-7Dh]
  struct ID3D11Resource *v23; // [rsp+58h] [rbp-79h] BYREF
  int v24; // [rsp+60h] [rbp-71h]
  struct DirectComposition::CScratchSurface *v25; // [rsp+68h] [rbp-69h] BYREF
  __int64 v26; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-59h] BYREF
  int v28; // [rsp+80h] [rbp-51h]
  int v29; // [rsp+84h] [rbp-4Dh]
  LONG v30; // [rsp+88h] [rbp-49h]
  int v31; // [rsp+8Ch] [rbp-45h]
  _BYTE v32[16]; // [rsp+90h] [rbp-41h] BYREF
  enum DXGI_FORMAT v33; // [rsp+A0h] [rbp-31h]

  v8 = a5;
  v24 = a4;
  left = a6->left;
  v12 = 0LL;
  top = a6->top;
  right = a6->right;
  bottom = a6->bottom;
  v31 = 1;
  v25 = 0LL;
  v23 = 0LL;
  v27 = __PAIR64__(top, left);
  v29 = right;
  v30 = bottom;
  v28 = 0;
  if ( a2 != a5 || *((_BYTE *)this + 112) )
    goto LABEL_2;
  v16 = right - left;
  v17 = bottom - top;
  if ( v16 == 1 )
    v21 = 1;
  else
    v21 = (v16 + 63) & 0xFFFFFFC0;
  if ( v17 == 1 )
    v22 = 1;
  else
    v22 = (v17 + 63) & 0xFFFFFFC0;
  ((void (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))a5->lpVtbl->QueryInterface)(
    a5,
    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
    &v26);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 80LL))(v26, v32);
  ScratchSurface = DirectComposition::CScratchSurfaceManager::GetScratchSurface(
                     a7,
                     v33,
                     (const struct DirectComposition::SizeU *)&v21,
                     &v25);
  v12 = v25;
  v19 = ScratchSurface;
  if ( ScratchSurface >= 0 )
  {
    (***((void (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))v25 + 3))(
      *((_QWORD *)v25 + 3),
      &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
      &v23);
    (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Resource *, _DWORD, unsigned __int64 *))(**((_QWORD **)this + 9) + 368LL))(
      *((_QWORD *)this + 9),
      v23,
      0LL,
      0LL,
      0,
      0,
      a5,
      0,
      &v27);
    v29 = a6->right - a6->left;
    v20 = a6->bottom - a6->top;
    v27 = 0LL;
    v8 = v23;
    v30 = v20;
  }
  ReleaseInterface<ID3D11Texture2D>(&v26);
  if ( v19 >= 0 )
LABEL_2:
    (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, _QWORD, int, _DWORD, struct ID3D11Resource *, _DWORD, unsigned __int64 *))(**((_QWORD **)this + 9) + 368LL))(
      *((_QWORD *)this + 9),
      a2,
      0LL,
      a3,
      v24,
      0,
      v8,
      0,
      &v27);
  ReleaseInterface<ID3D11Resource>(&v23);
  if ( v12 )
  {
    DirectComposition::CScratchSurface::Dispose(v12);
    CMILRefCountBaseT<IUnknown>::InternalRelease(v12);
  }
}
