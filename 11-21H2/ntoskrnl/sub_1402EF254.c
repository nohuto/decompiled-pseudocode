/*
 * XREFs of sub_1402EF254 @ 0x1402EF254
 * Callers:
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 * Callees:
 *     sub_1402EF2BC @ 0x1402EF2BC (sub_1402EF2BC.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 */

__int64 __fastcall sub_1402EF254(__int64 a1, int a2, int a3, unsigned __int16 *a4, int a5)
{
  __int64 v7; // rbx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5);
  if ( (v7 & 1) != 0 )
    v7 = 0LL;
  sub_1403462B0(v7, a2, a3, (_DWORD)a4, 0);
  return sub_1402EF2BC(a1, a4, v7);
}
