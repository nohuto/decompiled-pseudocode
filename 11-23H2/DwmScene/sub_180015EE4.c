/*
 * XREFs of sub_180015EE4 @ 0x180015EE4
 * Callers:
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_1800563E8 @ 0x1800563E8 (sub_1800563E8.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CBFA8 @ 0x1800CBFA8 (sub_1800CBFA8.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180015F5C @ 0x180015F5C (sub_180015F5C.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 */

__int64 *__fastcall sub_180015EE4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180015F5C(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D4C(a1 + 8, &v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
