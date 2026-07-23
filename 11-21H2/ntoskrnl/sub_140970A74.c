/*
 * XREFs of sub_140970A74 @ 0x140970A74
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140970C20 @ 0x140970C20 (sub_140970C20.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 */

__int64 __fastcall sub_140970A74(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(sub_140287970(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return sub_1402D9A20(*(void **)(a1 + 48));
}
