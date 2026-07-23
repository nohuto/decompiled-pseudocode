/*
 * XREFs of SepRmDestroyCapTable @ 0x1409D257C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403AE74C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B8420 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x14036FD00 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14036FE20 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14036FE80 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14036FED0 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1403C1CF0 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
