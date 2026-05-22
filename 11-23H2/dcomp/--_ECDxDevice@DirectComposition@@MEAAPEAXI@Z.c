/*
 * XREFs of ??_ECDxDevice@DirectComposition@@MEAAPEAXI@Z @ 0x1800F74F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDxDevice@DirectComposition@@MEAA@XZ @ 0x18001B0CC (--1CDxDevice@DirectComposition@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CDxDevice *__fastcall DirectComposition::CDxDevice::`vector deleting destructor'(
        DirectComposition::CDxDevice *this,
        char a2)
{
  DirectComposition::CDxDevice::~CDxDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
