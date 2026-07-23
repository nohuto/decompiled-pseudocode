/*
 * XREFs of sub_140A917D8 @ 0x140A917D8
 * Callers:
 *     sub_1402D2574 @ 0x1402D2574 (sub_1402D2574.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 */

LOGICAL __fastcall sub_140A917D8(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = dword_140C29FC0;
    if ( (dword_140C29FC0 & 0x10) != 0 )
      return sub_140A9E12C(TargetDevice);
  }
  return result;
}
