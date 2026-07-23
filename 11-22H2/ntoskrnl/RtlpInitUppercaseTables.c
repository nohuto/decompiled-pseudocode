/*
 * XREFs of RtlpInitUppercaseTables @ 0x140822E9C
 * Callers:
 *     ExInitializeNls @ 0x140822DEC (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     NtGetNlsSectionPtr @ 0x1407A23B0 (NtGetNlsSectionPtr.c)
 */

__int64 RtlpInitUppercaseTables()
{
  volatile __int64 *CurrentServerSiloGlobals; // rax
  volatile __int64 *v1; // rbx
  NTSTATUS NlsSectionPtr; // eax
  PVOID v3; // rcx
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = (volatile __int64 *)PsGetCurrentServerSiloGlobals();
  SectionPointer = 0LL;
  v1 = CurrentServerSiloGlobals;
  NlsSectionPtr = NtGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL);
  v3 = SectionPointer;
  if ( NlsSectionPtr < 0 )
    v3 = 0LL;
  SectionPointer = v3;
  if ( v3 )
  {
    _InterlockedExchange64(v1 + 154, (__int64)v3 + 4);
    _InterlockedExchange64(v1 + 155, (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    *((_QWORD *)v1 + 153) = SectionPointer;
  }
  else
  {
    *((_QWORD *)v1 + 154) = 0LL;
    *((_QWORD *)v1 + 155) = 0LL;
    *((_QWORD *)v1 + 153) = 0LL;
  }
  return 0LL;
}
