/*
 * XREFs of sub_1405030B0 @ 0x1405030B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140502F20 @ 0x140502F20 (sub_140502F20.c)
 *     sub_140502FE4 @ 0x140502FE4 (sub_140502FE4.c)
 */

__int64 __fastcall sub_1405030B0(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // r8d
  __int64 v9; // r15
  LARGE_INTEGER v11; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v14[3]; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER v15; // [rsp+B8h] [rbp+48h] BYREF

  v12 = 0LL;
  v11.QuadPart = 0LL;
  v15.QuadPart = 0LL;
  v13 = 0LL;
  v14[0] = 0LL;
  if ( !qword_140C4E4F0 || (v6 = qword_140C4E3E0, v7 = *(_QWORD *)(qword_140C4E4F0 + 192), !qword_140C4E3E0) || !v7 )
  {
    v8 = -1073741637;
    goto LABEL_10;
  }
  sub_140502F20(&v11, (__int64 *)&v12, &v15);
  if ( !is_mul_ok(v15.QuadPart, 0x3B9ACA00uLL) )
  {
    v8 = -1073741823;
    goto LABEL_10;
  }
  v9 = (unsigned __int64)v15.QuadPart * (unsigned __int128)0x3B9ACA00uLL / v6;
  v8 = sub_140502FE4(v12, v7, v11.QuadPart, v6, a1, &v13, v14);
  if ( v8 < 0 )
  {
LABEL_10:
    *a2 = 0LL;
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v8;
  }
  *a2 = v13;
  if ( a3 )
    *a3 = v9 + v14[0];
  return (unsigned int)v8;
}
