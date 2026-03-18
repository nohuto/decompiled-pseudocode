/*
 * XREFs of ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x1802AE300
 * Callers:
 *     ??_ECHolographicFrameProcessor@@O7EAAPEAXI@Z @ 0x1801215B0 (--_ECHolographicFrameProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x1802AE1C8 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
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
      operator delete(this);
  }
  return this;
}
