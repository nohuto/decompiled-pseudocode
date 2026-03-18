/*
 * XREFs of ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801C3EE0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::`scalar deleting destructor'(
        CCaptureRenderTarget *this,
        char a2)
{
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
