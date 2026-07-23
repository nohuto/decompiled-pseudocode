/*
 * XREFs of RtlGetSystemBootStatus @ 0x140863F90
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407A6A9C (RtlpSystemBootStatusRequest.c)
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
  return RtlpSystemBootStatusRequest(31, (__int64)v5, 1u, ReturnLength);
}
