/*
 * XREFs of SepRmDestroyCapTable @ 0x1409CF8D8
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403DA7FC (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405F4304 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x140206880 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140206B00 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140206B50 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1403A3620 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
