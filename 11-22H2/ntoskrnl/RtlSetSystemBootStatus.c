/*
 * XREFs of RtlSetSystemBootStatus @ 0x1407A6A60
 * Callers:
 *     PopWriteBsdPoInfo @ 0x14032B100 (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140802DEC (PopRecordLongPowerButtonPressDetected.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407A6A9C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __cdecl RtlSetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]

  v5[0] = BootStatusInformationClass;
  v5[1] = 0;
  v6 = DataBuffer;
  v7 = DataLength;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, PULONG))RtlpSystemBootStatusRequest)(
           32LL,
           v5,
           1LL,
           ReturnLength);
}
