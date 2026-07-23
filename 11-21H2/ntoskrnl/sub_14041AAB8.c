/*
 * XREFs of sub_14041AAB8 @ 0x14041AAB8
 * Callers:
 *     sub_1409EE8FC @ 0x1409EE8FC (sub_1409EE8FC.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 * Callees:
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 */

__int64 __fastcall sub_14041AAB8(__int64 a1, __int64 a2)
{
  return sub_140460DBA(a1, *(_QWORD *)(a2 + 48), a2);
}
