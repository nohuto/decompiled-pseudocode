/*
 * XREFs of ??$ReleaseInterface@UIDCompositionSurfaceListenerInternal@DirectComposition@@@@YAXAEAPEAUIDCompositionSurfaceListenerInternal@DirectComposition@@@Z @ 0x180037B78
 * Callers:
 *     ??0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_N@Z @ 0x180037538 (--0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_.c)
 *     ?Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z @ 0x1800FF054 (-Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::IDCompositionSurfaceListenerInternal>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
