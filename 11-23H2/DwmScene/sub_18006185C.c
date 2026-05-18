/*
 * XREFs of sub_18006185C @ 0x18006185C
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 */

__int64 *__fastcall sub_18006185C(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180011DA0(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = v8[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010530(v6);
  return a1;
}
