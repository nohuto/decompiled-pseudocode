/*
 * XREFs of RtlGetSystemBootStatus @ 0x14085F000
 * Callers:
 *     sub_140B2C0C0 @ 0x140B2C0C0 (sub_140B2C0C0.c)
 * Callees:
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
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
  return sub_1407EDB2C(31, (__int64)v5, 1u, ReturnLength);
}
