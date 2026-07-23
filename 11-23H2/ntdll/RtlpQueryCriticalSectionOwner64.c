/*
 * XREFs of RtlpQueryCriticalSectionOwner64 @ 0x1800E448C
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E42EC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 */

PVOID __fastcall RtlpQueryCriticalSectionOwner64(HANDLE ProcessHandle, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  PVOID BaseAddress[5]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE Buffer[8]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  __int16 v9; // [rsp+86h] [rbp-12h]

  v2 = 0LL;
  v3 = a2 - 8;
  if ( ZwReadVirtualMemory(ProcessHandle, (PVOID)(a2 - 8), BaseAddress, 0x28uLL, 0LL) >= 0
    && BaseAddress[0]
    && ZwReadVirtualMemory(ProcessHandle, BaseAddress[0], Buffer, 0x30uLL, 0LL) >= 0
    && v8 == v3
    && v9 == 17235 )
  {
    return BaseAddress[2];
  }
  return (PVOID)v2;
}
