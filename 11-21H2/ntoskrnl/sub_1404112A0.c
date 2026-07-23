/*
 * XREFs of sub_1404112A0 @ 0x1404112A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140416CB0 @ 0x140416CB0 (sub_140416CB0.c)
 *     sub_140416DC0 @ 0x140416DC0 (sub_140416DC0.c)
 */

__int64 __fastcall sub_1404112A0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_140416CB0(a2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 4), a3);
  return sub_140416DC0(a1, a3, a2);
}
