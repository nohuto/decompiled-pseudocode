/*
 * XREFs of ??_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z @ 0x180104A40
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HidLampMultiUpdateReportParser@@UEAA@XZ @ 0x1801048AC (--1HidLampMultiUpdateReportParser@@UEAA@XZ.c)
 */

HidLampMultiUpdateReportParser *__fastcall HidLampMultiUpdateReportParser::`scalar deleting destructor'(
        HidLampMultiUpdateReportParser *this,
        char a2)
{
  HidLampMultiUpdateReportParser::~HidLampMultiUpdateReportParser(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
