/*
 * XREFs of sub_1406580D0 @ 0x1406580D0
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 */

__int64 __fastcall sub_1406580D0(__int64 a1)
{
  return sub_14071F300(
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
