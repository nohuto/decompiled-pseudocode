/*
 * XREFs of ??_EHapticInterface@@UEAAPEAXI@Z @ 0x18018B200
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x18018B148 (--1HapticInterface@@UEAA@XZ.c)
 */

HapticInterface *__fastcall HapticInterface::`vector deleting destructor'(HapticInterface *this, char a2)
{
  HapticInterface::~HapticInterface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
