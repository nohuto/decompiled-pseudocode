/*
 * XREFs of ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x1801B4330
 * Callers:
 *     ??_ERawButtonProcessor@@W7EAAPEAXI@Z @ 0x180053B20 (--_ERawButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1RawButtonProcessor@@UEAA@XZ @ 0x1801B42B4 (--1RawButtonProcessor@@UEAA@XZ.c)
 */

RawButtonProcessor *__fastcall RawButtonProcessor::`vector deleting destructor'(RawButtonProcessor *this, char a2)
{
  RawButtonProcessor::~RawButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
