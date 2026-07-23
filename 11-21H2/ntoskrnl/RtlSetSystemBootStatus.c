/*
 * XREFs of RtlSetSystemBootStatus @ 0x1407EDAF0
 * Callers:
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_1403A68B0 @ 0x1403A68B0 (sub_1403A68B0.c)
 *     sub_14082876C @ 0x14082876C (sub_14082876C.c)
 *     sub_140B2C0C0 @ 0x140B2C0C0 (sub_140B2C0C0.c)
 * Callees:
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
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
  return ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, PULONG))sub_1407EDB2C)(32LL, v5, 1LL, ReturnLength);
}
