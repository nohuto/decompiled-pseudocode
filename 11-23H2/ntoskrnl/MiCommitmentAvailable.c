/*
 * XREFs of MiCommitmentAvailable @ 0x1402EE868
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 17816);
  v2 = *(_QWORD *)(a1 + 17576);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}
