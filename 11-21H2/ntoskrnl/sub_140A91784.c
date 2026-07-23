/*
 * XREFs of sub_140A91784 @ 0x140A91784
 * Callers:
 *     sub_1402D2574 @ 0x1402D2574 (sub_1402D2574.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 */

void __fastcall sub_140A91784(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (dword_140C29FC0 & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      sub_140A9E12C(TargetDevice);
  }
}
