/*
 * XREFs of ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x18029F3D4
 * Callers:
 *     ??_ECHolographicFrameProcessor@@O7EAAPEAXI@Z @ 0x18010AD70 (--_ECHolographicFrameProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x18029F2A8 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 */

CHolographicFrameProcessor *__fastcall CHolographicFrameProcessor::`vector deleting destructor'(
        CHolographicFrameProcessor *this,
        char a2)
{
  CHolographicFrameProcessor::~CHolographicFrameProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
