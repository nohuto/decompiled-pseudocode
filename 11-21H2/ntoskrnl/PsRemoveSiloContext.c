/*
 * XREFs of PsRemoveSiloContext @ 0x1409AB7E0
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_1409AC7F8 @ 0x1409AC7F8 (sub_1409AC7F8.c)
 * Callees:
 *     sub_1409B4B90 @ 0x1409B4B90 (sub_1409B4B90.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = qword_140D32A90;
  if ( a3 )
    *a3 = 0LL;
  return sub_1409B4B90(v3, a2, 0LL, a3);
}
