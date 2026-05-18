/*
 * XREFs of sub_18008E248 @ 0x18008E248
 * Callers:
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18008E1F8 @ 0x18008E1F8 (sub_18008E1F8.c)
 */

_QWORD *__fastcall sub_18008E248(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // r9
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  sub_18008E1F8(a1, &v8);
  if ( sub_180011DE0(&v8) )
  {
    v3 = (__int64 *)sub_180026B04(v8, &v12);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v11 = 0LL;
    v3 = (__int64 *)&v10;
    v5 = 0LL;
    v4 = 2;
  }
  *v3 = 0LL;
  *a2 = v5;
  v6 = v3[1];
  v3[1] = 0LL;
  a2[1] = v6;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v11 )
      sub_180010530(v11);
  }
  if ( (v4 & 1) != 0 && v13 )
    sub_180010530(v13);
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
