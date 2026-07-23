/*
 * XREFs of sub_140947864 @ 0x140947864
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 */

__int64 __fastcall sub_140947864(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // edx
  int v5; // eax

  v2 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v3 = v2[75];
  if ( (unsigned int)(v3 - 789) <= 1 )
    return 3221225558LL;
  if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = v2[99];
  if ( (v5 & 0x1001) != 0 || (v5 & 1) == 0 && v2[150] )
    return 3221225488LL;
  if ( v3 != 778 )
    return 3221225860LL;
  sub_140765430((__int64)v2, 0, 44, 0);
  return 0LL;
}
