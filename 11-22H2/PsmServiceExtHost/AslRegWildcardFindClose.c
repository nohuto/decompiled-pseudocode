/*
 * XREFs of AslRegWildcardFindClose @ 0x18009F1D4
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009611C (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x18009F294 (AslRegWildcardFindFirst.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslRegWildcardFindClose(PVOID *P)
{
  PVOID **v1; // rsi
  PVOID *v3; // rcx
  PVOID *v4; // rbx
  PVOID v5; // r8
  BOOLEAN result; // al

  if ( P )
  {
    v1 = (PVOID **)*P;
    if ( *P != P )
    {
      do
      {
        v3 = v1[4];
        if ( v3 )
        {
          ZwClose(v3);
          v1[4] = 0LL;
        }
        v4 = *v1;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
        v1 = (PVOID **)v4;
      }
      while ( v4 != P );
    }
    v5 = P[3];
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return result;
}
