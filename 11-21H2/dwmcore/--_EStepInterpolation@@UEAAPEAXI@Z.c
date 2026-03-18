/*
 * XREFs of ??_EStepInterpolation@@UEAAPEAXI@Z @ 0x1800DCC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

StepInterpolation *__fastcall StepInterpolation::`vector deleting destructor'(StepInterpolation *this, char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x30uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
