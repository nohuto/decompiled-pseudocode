/*
 * XREFs of sub_14029C764 @ 0x14029C764
 * Callers:
 *     sub_140706680 @ 0x140706680 (sub_140706680.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14029C764(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
