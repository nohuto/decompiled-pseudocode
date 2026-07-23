/*
 * XREFs of sub_140584510 @ 0x140584510
 * Callers:
 *     sub_1405E0E68 @ 0x1405E0E68 (sub_1405E0E68.c)
 *     sub_1405E0FA0 @ 0x1405E0FA0 (sub_1405E0FA0.c)
 *     sub_1405E10BC @ 0x1405E10BC (sub_1405E10BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140584510(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
