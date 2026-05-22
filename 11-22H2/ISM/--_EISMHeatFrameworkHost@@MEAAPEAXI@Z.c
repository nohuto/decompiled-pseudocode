/*
 * XREFs of ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x1801B1178
 * Callers:
 *     ??_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z @ 0x18007D790 (--_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x1801B0F44 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 */

ISMHeatFrameworkHost *__fastcall ISMHeatFrameworkHost::`vector deleting destructor'(
        ISMHeatFrameworkHost *this,
        char a2)
{
  ISMHeatFrameworkHost::~ISMHeatFrameworkHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
