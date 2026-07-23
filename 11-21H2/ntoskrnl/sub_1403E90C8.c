/*
 * XREFs of sub_1403E90C8 @ 0x1403E90C8
 * Callers:
 *     sub_1403E9268 @ 0x1403E9268 (sub_1403E9268.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E8F20 @ 0x1403E8F20 (sub_1403E8F20.c)
 */

__int64 __fastcall sub_1403E90C8(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 *v10; // rdx
  unsigned __int8 v13; // r10
  char v14; // bl
  unsigned __int8 *v15; // rcx
  bool v17; // zf
  unsigned __int8 *v18; // r8
  unsigned __int8 i; // al
  unsigned __int8 *v20; // rcx
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // al
  _OWORD v26[2]; // [rsp+50h] [rbp-58h] BYREF

  v10 = *a2;
  v13 = 0;
  v14 = a1 | 8;
  v15 = v10 + 1;
  *a2 = v10 + 1;
  v17 = v10[1] == 94;
  v26[0] = 0LL;
  if ( !v17 )
  {
    v15 = v10;
    v14 = a1;
  }
  v26[1] = 0LL;
  v18 = v15 + 1;
  i = v15[1];
  if ( i != 93 )
    goto LABEL_5;
  v13 = 93;
  BYTE11(v26[0]) = 32;
  v18 = v15 + 2;
  for ( i = v15[2]; i != 93; i = *v18 )
  {
LABEL_5:
    v20 = v18++;
    if ( i == 45 && v13 && (v21 = *v18, *v18 != 93) )
    {
      v18 = v20 + 2;
      if ( v13 >= v21 )
      {
        v22 = v13;
      }
      else
      {
        v22 = v21;
        v21 = v13;
      }
      do
      {
        v23 = (unsigned __int64)v21 >> 3;
        v24 = v21++;
        *((_BYTE *)v26 + v23) |= 1 << (v24 & 7);
      }
      while ( v21 <= v22 );
      v13 = 0;
    }
    else
    {
      v13 = i;
      *((_BYTE *)v26 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v18;
  return sub_1403E8F20(v14, (__int64)v26, a3, a4, a5, a6, a7, a8, a9);
}
