/*
 * XREFs of sub_180062508 @ 0x180062508
 * Callers:
 *     sub_180065860 @ 0x180065860 (sub_180065860.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18006276C @ 0x18006276C (sub_18006276C.c)
 *     sub_180066A60 @ 0x180066A60 (sub_180066A60.c)
 */

_QWORD *__fastcall sub_180062508(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  sub_18002A37C(a1 + 16);
  sub_180011C50(*a4 + 56LL, &v19);
  sub_18001246C(&v17, &v19);
  v8 = sub_18001246C(&v21, a3);
  sub_180066A60(a1, &v15, v8);
  if ( sub_180011DE0(&v15) )
  {
    v9 = (__int64 *)sub_18006276C(v15, v22);
    v10 = *v9;
    v11 = 5;
  }
  else
  {
    v18 = 0LL;
    v9 = &v17;
    v10 = 0LL;
    v11 = 6;
  }
  *a2 = v10;
  a2[1] = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v18 )
      sub_180010530(v18);
  }
  if ( (v11 & 1) != 0 && v23 )
    sub_180010530(v23);
  if ( v16 )
    sub_180010530(v16);
  if ( v20 )
    sub_180010530(v20);
  v12 = a3[1];
  if ( v12 )
    sub_180010530(v12);
  v13 = a4[1];
  if ( v13 )
    sub_180010530(v13);
  return a2;
}
