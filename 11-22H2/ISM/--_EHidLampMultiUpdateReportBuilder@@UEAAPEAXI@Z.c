/*
 * XREFs of ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180103680
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1801035D0 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::`vector deleting destructor'(
        HidLampMultiUpdateReportBuilder *this,
        char a2)
{
  HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
