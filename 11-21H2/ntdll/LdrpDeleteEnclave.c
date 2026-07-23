/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D89DC
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D8380 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A79A0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8738 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 */

NTSTATUS __fastcall LdrpDeleteEnclave(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = NtTerminateEnclave(BaseAddress[9], 4u);
  if ( result >= 0 )
  {
    BaseAddress[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)BaseAddress, -1073741823);
    BaseAddress[9] = 0LL;
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(BaseAddress);
    return 0;
  }
  return result;
}
