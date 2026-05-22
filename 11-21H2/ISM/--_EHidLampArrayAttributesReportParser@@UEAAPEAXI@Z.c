/*
 * XREFs of ??_EHidLampArrayAttributesReportParser@@UEAAPEAXI@Z @ 0x1800DA0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 */

HidLampArrayAttributesReportParser *__fastcall HidLampArrayAttributesReportParser::`vector deleting destructor'(
        HidLampArrayAttributesReportParser *this,
        char a2)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
