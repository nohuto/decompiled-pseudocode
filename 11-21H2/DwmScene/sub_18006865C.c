/*
 * XREFs of sub_18006865C @ 0x18006865C
 * Callers:
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 * Callees:
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 */

__int64 __fastcall sub_18006865C(int a1, __int64 a2, char a3)
{
  sub_180068694(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
