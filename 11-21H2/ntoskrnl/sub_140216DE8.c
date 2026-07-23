/*
 * XREFs of sub_140216DE8 @ 0x140216DE8
 * Callers:
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140216DE8(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 592);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
