/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801DA0CC
 * Callers:
 *     ??_EHeatProcessor@@OBI@EAAPEAXI@Z @ 0x18006B070 (--_EHeatProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801D9FA4 (--1HeatProcessor@@MEAA@XZ.c)
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
