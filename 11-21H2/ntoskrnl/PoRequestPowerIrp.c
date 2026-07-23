/*
 * XREFs of PoRequestPowerIrp @ 0x1403A3C60
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 * Callees:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return ((__int64 (__fastcall *)(_DWORD, _BYTE, _DWORD, _DWORD, __int64, char, PIRP))sub_1403A3C90)(
           (_DWORD)DeviceObject,
           MinorFunction,
           (POWER_STATE)PowerState.SystemState,
           (_DWORD)CompletionFunction,
           (__int64)Context,
           0,
           (PIRP)Irp);
}
