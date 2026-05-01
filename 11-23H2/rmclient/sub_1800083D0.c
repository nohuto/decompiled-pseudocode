/*
 * XREFs of sub_1800083D0 @ 0x1800083D0
 * Callers:
 *     sub_1800065E0 @ 0x1800065E0 (sub_1800065E0.c)
 *     sub_180006EE0 @ 0x180006EE0 (sub_180006EE0.c)
 *     HamCloseActivity @ 0x180007EB0 (HamCloseActivity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800083D0(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
