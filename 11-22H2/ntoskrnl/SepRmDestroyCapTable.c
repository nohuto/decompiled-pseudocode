/*
 * XREFs of SepRmDestroyCapTable @ 0x1409D242C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403ADEDC (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B7F40 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x14036F510 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14036F630 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14036F690 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14036F6E0 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1403C14B0 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
