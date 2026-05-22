/*
 * XREFs of ??_GHidLampAttributesResponseReportParser@@UEAAPEAXI@Z @ 0x1800DACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 */

HidLampAttributesResponseReportParser *__fastcall HidLampAttributesResponseReportParser::`scalar deleting destructor'(
        HidLampAttributesResponseReportParser *this,
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
