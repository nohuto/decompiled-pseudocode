/*
 * XREFs of sub_14084DC30 @ 0x14084DC30
 * Callers:
 *     sub_14084DB84 @ 0x14084DB84 (sub_14084DB84.c)
 *     sub_140B01670 @ 0x140B01670 (sub_140B01670.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1406E0A70 @ 0x1406E0A70 (sub_1406E0A70.c)
 */

void __fastcall sub_14084DC30(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1406E0A70(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    sub_1402D8494(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
