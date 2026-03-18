/*
 * XREFs of AslRegWildcardFindClose @ 0x140A56234
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140A5075C (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x140A562B8 (AslRegWildcardFindFirst.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AslRegWildcardFindClose(PVOID *P)
{
  PVOID **v1; // rsi
  PVOID *v3; // rcx
  PVOID *v4; // rbx
  PVOID v5; // rcx

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
        ExFreePoolWithTag(v1, 0x74705041u);
        v1 = (PVOID **)v4;
      }
      while ( v4 != P );
    }
    v5 = P[3];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
