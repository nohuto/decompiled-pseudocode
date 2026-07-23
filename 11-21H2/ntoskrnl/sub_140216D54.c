/*
 * XREFs of sub_140216D54 @ 0x140216D54
 * Callers:
 *     sub_140216B04 @ 0x140216B04 (sub_140216B04.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 * Callees:
 *     sub_140216DA0 @ 0x140216DA0 (sub_140216DA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140216D54(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      sub_140216DA0(a1 - 1664);
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
