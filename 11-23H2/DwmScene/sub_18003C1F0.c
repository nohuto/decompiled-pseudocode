/*
 * XREFs of sub_18003C1F0 @ 0x18003C1F0
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_18003C1F0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  sub_18003E330(a1);
  v6 = sub_18003C0D0(a1, *a3);
  if ( v6 )
  {
    v7 = (__int64 *)sub_180011D4C(v6 + 8, &v14);
    v8 = 5;
    v9 = *v7;
  }
  else
  {
    v13 = 0LL;
    v7 = (__int64 *)&v12;
    v9 = 0LL;
    v8 = 6;
  }
  *v7 = 0LL;
  *a2 = v9;
  v10 = v7[1];
  v7[1] = 0LL;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v13 )
      sub_180010530(v13);
  }
  if ( (v8 & 1) != 0 && v15 )
    sub_180010530(v15);
  return a2;
}
