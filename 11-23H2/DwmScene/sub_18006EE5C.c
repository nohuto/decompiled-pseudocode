/*
 * XREFs of sub_18006EE5C @ 0x18006EE5C
 * Callers:
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 *     sub_18006EED4 @ 0x18006EED4 (sub_18006EED4.c)
 */

__int64 *__fastcall sub_18006EE5C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18006EED4(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)sub_180011D4C(a1 + 8, &v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
