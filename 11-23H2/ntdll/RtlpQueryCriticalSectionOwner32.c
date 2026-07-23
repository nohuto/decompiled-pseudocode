/*
 * XREFs of RtlpQueryCriticalSectionOwner32 @ 0x1800E43EC
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E42EC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner32(HANDLE ProcessHandle, int a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-3Ch]
  _BYTE Buffer[4]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int16 v10; // [rsp+66h] [rbp-12h]

  v2 = 0;
  v3 = a2 - 4;
  if ( ZwReadVirtualMemory(ProcessHandle, (PVOID)(unsigned int)(a2 - 4), &BaseAddress, 0x18uLL, 0LL) >= 0
    && (_DWORD)BaseAddress
    && ZwReadVirtualMemory(ProcessHandle, (PVOID)(unsigned int)BaseAddress, Buffer, 0x20uLL, 0LL) >= 0
    && v9 == v3
    && v10 == 17235 )
  {
    return v7;
  }
  return v2;
}
