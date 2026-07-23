/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800D8510
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 locked; // rax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF

  locked = LdrpObtainLockedEnclave(BaseAddress, 0LL);
  v3 = 0;
  v4 = locked;
  if ( locked )
  {
    if ( *(_DWORD *)(locked + 56) == 16 )
    {
      v5 = *(_QWORD *)(locked + 112);
      if ( v5 )
      {
        if ( BaseAddress == *(PVOID *)(v5 + 184)
          && ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryRegionInformationEx,
               MemoryInformation,
               0x30uLL,
               0LL) >= 0 )
        {
          v3 = (MemoryInformation[12] & 0x40) != 0;
        }
      }
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 16));
    LdrpDereferenceEnclave((PVOID)v4);
    LOBYTE(locked) = v3;
  }
  return locked;
}
