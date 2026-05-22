/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089D84
 * Callers:
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 *     ??1CDynamicPool@DirectComposition@@EEAA@XZ @ 0x1800859D4 (--1CDynamicPool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CAtlasSurfacePool>::InternalRelease(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBaseT<IUnknown>::InternalRelease(v1);
  }
  return result;
}
