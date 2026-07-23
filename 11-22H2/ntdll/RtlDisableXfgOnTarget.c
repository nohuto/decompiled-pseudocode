/*
 * XREFs of RtlDisableXfgOnTarget @ 0x18010A2C8
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A2380 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall RtlDisableXfgOnTarget(__int64 a1)
{
  int v2; // [rsp+30h] [rbp-9h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+38h] [rbp-1h] BYREF
  _QWORD VmInformation[5]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v5[2]; // [rsp+70h] [rbp+37h] BYREF

  v5[1] = 16LL;
  v2 = 0;
  v5[0] = a1 & 0xFFF;
  VmInformation[3] = 0LL;
  VirtualAddresses.VirtualAddress = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  VmInformation[4] = 0LL;
  VmInformation[1] = &v2;
  VirtualAddresses.NumberOfBytes = 4096LL;
  VmInformation[2] = v5;
  VmInformation[0] = 1LL;
  return ZwSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           VmCfgCallTargetInformation,
           1uLL,
           &VirtualAddresses,
           VmInformation,
           0x28u);
}
