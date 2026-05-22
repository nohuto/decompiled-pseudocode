/*
 * XREFs of ?SetAdapterLuidAndBuffers@?$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInternal@@@DirectComposition@@UEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x1800F4340
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z @ 0x1800FAC8C (-SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z.c)
 */

int __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionCaptureRenderTargetInternal>::SetAdapterLuidAndBuffers(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        void *const *a4)
{
  DirectComposition::CResourceProxy *v5; // rbx
  int result; // eax
  unsigned int v8; // edx

  v5 = (DirectComposition::CResourceProxy *)(a1 + 8);
  result = DirectComposition::CResourceProxy::SetBufferProperty(
             (DirectComposition::CResourceProxy *)(a1 + 8),
             2,
             a2,
             8uLL);
  if ( result >= 0 )
    return DirectComposition::CResourceProxy::SetHandleArrayProperty(v5, v8, a4, a3);
  return result;
}
