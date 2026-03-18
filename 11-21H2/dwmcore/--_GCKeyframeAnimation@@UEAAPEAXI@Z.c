/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x18006F970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x240uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
