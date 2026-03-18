/*
 * XREFs of VidSchIsWorkerThread @ 0x1C0001BF0
 * Callers:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00F0298 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchFlushAdapter @ 0x1C0107150 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C0108850 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 168);
}
