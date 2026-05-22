/*
 * XREFs of ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x18016758C
 * Callers:
 *     ??_EEdgyProcessor@@W7EAAPEAXI@Z @ 0x180068090 (--_EEdgyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180167314 (--1EdgyProcessor@@UEAA@XZ.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::`vector deleting destructor'(EdgyProcessor *this, char a2)
{
  EdgyProcessor::~EdgyProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
