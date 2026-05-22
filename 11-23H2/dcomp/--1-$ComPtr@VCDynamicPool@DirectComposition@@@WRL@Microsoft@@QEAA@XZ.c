/*
 * XREFs of ??1?$ComPtr@VCDynamicPool@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7D3C
 * Callers:
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<DirectComposition::CDynamicPool>::~ComPtr<DirectComposition::CDynamicPool>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)CMILRefCountBaseT<IUnknown>::InternalRelease(result);
  }
  return result;
}
