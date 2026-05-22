/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801BBD4C
 * Callers:
 *     ??_EHeatProcessor@@OBI@EAAPEAXI@Z @ 0x180053DE0 (--_EHeatProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801BBC24 (--1HeatProcessor@@MEAA@XZ.c)
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
