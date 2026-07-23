/*
 * XREFs of sub_1406E10CC @ 0x1406E10CC
 * Callers:
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 * Callees:
 *     sub_140258000 @ 0x140258000 (sub_140258000.c)
 */

NTSTATUS __fastcall sub_1406E10CC(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return sub_140258000(v2);
  else
    return 0;
}
