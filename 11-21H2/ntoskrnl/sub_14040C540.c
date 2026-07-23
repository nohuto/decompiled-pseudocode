/*
 * XREFs of sub_14040C540 @ 0x14040C540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140413410 @ 0x140413410 (sub_140413410.c)
 *     sub_1404158D0 @ 0x1404158D0 (sub_1404158D0.c)
 */

__int64 __fastcall sub_14040C540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  sub_140413410(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return sub_1404158D0(a1, a5, a4);
}
