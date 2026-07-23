/*
 * XREFs of sub_14091CB44 @ 0x14091CB44
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 * Callees:
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 */

__int64 __fastcall sub_14091CB44(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  sub_1406E93C0(BugCheckParameter2, (__int64)sub_14091CB30, (__int64)sub_14091CBB0, a3, a2, 1, 0);
  return sub_14091CBB0(BugCheckParameter2);
}
