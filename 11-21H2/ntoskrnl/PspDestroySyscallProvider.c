/*
 * XREFs of PspDestroySyscallProvider @ 0x1406596A0
 * Callers:
 *     PspDereferenceSyscallProvider @ 0x140419D6C (PspDereferenceSyscallProvider.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x140419D3C (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x140419ED8 (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14065859C (VslRevokeSyscallProviderServiceTables.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PspDestroySyscallProvider(PVOID **P)
{
  PVOID *v2; // rcx
  PVOID *v3; // rax

  PspAcquireSyscallProviderRegistrationLockExclusive();
  v2 = *P;
  if ( (*P)[1] != P || (v3 = P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  PspReleaseSyscallProviderRegistrationLockExclusive();
  VslRevokeSyscallProviderServiceTables((__int64)P[4][3]);
  ObfDereferenceObjectWithTag(P[4], 0x63537350u);
  ExFreePoolWithTag(P, 0x63537350u);
}
