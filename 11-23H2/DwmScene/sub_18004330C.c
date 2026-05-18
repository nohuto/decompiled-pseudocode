/*
 * XREFs of sub_18004330C @ 0x18004330C
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18004C8D0 @ 0x18004C8D0 (sub_18004C8D0.c)
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 *     sub_180080F70 @ 0x180080F70 (sub_180080F70.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_18008156C @ 0x18008156C (sub_18008156C.c)
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 *     sub_18009B3C0 @ 0x18009B3C0 (sub_18009B3C0.c)
 *     sub_1800A4FA0 @ 0x1800A4FA0 (sub_1800A4FA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 */

_QWORD *__fastcall sub_18004330C(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)sub_180011C50(a1 + 56, &v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
