/*
 * XREFs of sub_1402F6170 @ 0x1402F6170
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1407F5E04 @ 0x1407F5E04 (sub_1407F5E04.c)
 *     sub_1407F5F80 @ 0x1407F5F80 (sub_1407F5F80.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 * Callees:
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_1406E1570 @ 0x1406E1570 (sub_1406E1570.c)
 */

char __fastcall sub_1402F6170(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return sub_140300B74(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)sub_1406E1570(*(_QWORD *)(a1 + 1624)) != 0;
}
