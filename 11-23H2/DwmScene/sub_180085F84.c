/*
 * XREFs of sub_180085F84 @ 0x180085F84
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 *     sub_180085FFC @ 0x180085FFC (sub_180085FFC.c)
 */

__int64 *__fastcall sub_180085F84(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180085FFC(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)sub_180011D4C(a1 + 8, &v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
