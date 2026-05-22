/*
 * XREFs of ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x1800F3230
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800F31A8 (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 */

HidLampRangeUpdateReportBuilder *__fastcall HidLampRangeUpdateReportBuilder::`scalar deleting destructor'(
        HidLampRangeUpdateReportBuilder *this,
        char a2)
{
  HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
