/*
 * XREFs of sub_1407FB114 @ 0x1407FB114
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_1407FB090 @ 0x1407FB090 (sub_1407FB090.c)
 * Callees:
 *     sub_14081C658 @ 0x14081C658 (sub_14081C658.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407FB114(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    sub_14081C658(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
