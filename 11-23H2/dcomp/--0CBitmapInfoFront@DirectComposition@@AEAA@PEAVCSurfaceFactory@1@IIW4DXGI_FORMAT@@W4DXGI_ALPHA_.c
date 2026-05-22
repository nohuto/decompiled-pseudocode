/*
 * XREFs of ??0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_N@Z @ 0x180037538
 * Callers:
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 * Callees:
 *     ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x180037808 (--0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurfac.c)
 *     ??$ReleaseInterface@UIDCompositionSurfaceListenerInternal@DirectComposition@@@@YAXAEAPEAUIDCompositionSurfaceListenerInternal@DirectComposition@@@Z @ 0x180037B78 (--$ReleaseInterface@UIDCompositionSurfaceListenerInternal@DirectComposition@@@@YAXAEAPEAUIDCompo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

DirectComposition::CBitmapInfoFront *__fastcall DirectComposition::CBitmapInfoFront::CBitmapInfoFront(
        DirectComposition::CBitmapInfoFront *this,
        struct DirectComposition::CSurfaceFactory *a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum DXGI_ALPHA_MODE a6,
        enum D2D1_EXTEND_MODE *a7,
        struct IDCompositionSurface *a8,
        bool a9)
{
  char v12; // cl
  char v13; // cl
  enum D2D1_EXTEND_MODE *v14; // rax
  enum D2D1_EXTEND_MODE v16; // eax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CBitmapInfo::CBitmapInfo(this, a2, a6, 0LL);
  *((_QWORD *)this + 8) = (char *)this + 96;
  *((_QWORD *)this + 9) = (char *)this + 96;
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)((char *)this + 84) = 1LL;
  v12 = *((_BYTE *)this + 112);
  *(_QWORD *)this = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CBitmapInfo'};
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 7) = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CDirtyNotifier'};
  v13 = (16 * a9) | v12 & 0xEF;
  v17 = 0LL;
  *((_DWORD *)this + 13) = a5;
  v14 = a7;
  *((_BYTE *)this + 112) = v13;
  if ( v14 )
  {
    LODWORD(a7) = 2048;
    *((_BYTE *)this + 112) = v13 | 4;
    v16 = *v14;
    HIDWORD(a7) = 1;
    *((_DWORD *)this + 29) = v16;
    *(_QWORD *)((char *)this + 44) = a7;
  }
  else
  {
    *((_DWORD *)this + 11) = a3;
    *((_DWORD *)this + 12) = a4;
  }
  (**(void (__fastcall ***)(struct IDCompositionSurface *, GUID *, __int64 *))a8)(
    a8,
    &GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4,
    &v17);
  *((_QWORD *)this + 4) = v17;
  ReleaseInterface<DirectComposition::IDCompositionSurfaceListenerInternal>(&v17);
  return this;
}
