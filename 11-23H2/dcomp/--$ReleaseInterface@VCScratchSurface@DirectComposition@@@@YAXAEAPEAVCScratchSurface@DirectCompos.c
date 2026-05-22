/*
 * XREFs of ??$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectComposition@@@Z @ 0x1800FAD0C
 * Callers:
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC (-Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FO.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CScratchSurface>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
