/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D869C
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D8030 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A4860 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D83F8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D8720 (LdrpDereferenceEnclave.c)
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
