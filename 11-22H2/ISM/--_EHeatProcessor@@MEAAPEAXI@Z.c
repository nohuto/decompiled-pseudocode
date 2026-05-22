/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801E790C
 * Callers:
 *     ??_EHeatProcessor@@OBI@EAAPEAXI@Z @ 0x18007EB50 (--_EHeatProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801E7814 (--1HeatProcessor@@MEAA@XZ.c)
 */

HeatProcessor *__fastcall HeatProcessor::`vector deleting destructor'(HeatProcessor *this, char a2)
{
  HeatProcessor::~HeatProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
