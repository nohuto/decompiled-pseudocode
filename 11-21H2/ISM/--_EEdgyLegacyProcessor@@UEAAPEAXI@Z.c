/*
 * XREFs of ??_EEdgyLegacyProcessor@@UEAAPEAXI@Z @ 0x1801A9EBC
 * Callers:
 *     ??_EEdgyLegacyProcessor@@W7EAAPEAXI@Z @ 0x180053840 (--_EEdgyLegacyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801A9E88 (--1EdgyLegacyProcessor@@UEAA@XZ.c)
 */

EdgyLegacyProcessor *__fastcall EdgyLegacyProcessor::`vector deleting destructor'(EdgyLegacyProcessor *this, char a2)
{
  EdgyLegacyProcessor::~EdgyLegacyProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
