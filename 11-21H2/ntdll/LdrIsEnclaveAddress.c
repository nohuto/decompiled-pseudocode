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

char __fastcall LdrIsEnclaveAddress(__int64 a1)
{
  __int64 locked; // rax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  char v7; // [rsp+3Ch] [rbp-2Ch]

  locked = LdrpObtainLockedEnclave(a1, 0LL);
  v3 = 0;
  v4 = locked;
  if ( locked )
  {
    if ( *(_DWORD *)(locked + 56) == 16 )
    {
      v5 = *(_QWORD *)(locked + 112);
      if ( v5 )
      {
        if ( a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory() >= 0 )
          v3 = (v7 & 0x40) != 0;
      }
    }
    RtlLeaveCriticalSection(v4 + 16);
    LdrpDereferenceEnclave(v4);
    LOBYTE(locked) = v3;
  }
  return locked;
}
