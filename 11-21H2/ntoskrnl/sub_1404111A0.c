/*
 * XREFs of sub_1404111A0 @ 0x1404111A0
 * Callers:
 *     sub_140411300 @ 0x140411300 (sub_140411300.c)
 * Callees:
 *     sub_140416CB0 @ 0x140416CB0 (sub_140416CB0.c)
 *     sub_140416DC0 @ 0x140416DC0 (sub_140416DC0.c)
 */

__int64 __fastcall sub_1404111A0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  sub_140416CB0(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return sub_140416DC0(a1, a5, a4);
}
