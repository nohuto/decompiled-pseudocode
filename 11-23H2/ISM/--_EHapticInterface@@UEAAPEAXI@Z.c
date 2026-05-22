/*
 * XREFs of ??_EHapticInterface@@UEAAPEAXI@Z @ 0x1801A9370
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x1801A92A8 (--1HapticInterface@@UEAA@XZ.c)
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
