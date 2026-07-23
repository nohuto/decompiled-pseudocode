/*
 * XREFs of sub_14065A018 @ 0x14065A018
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065A150 @ 0x14065A150 (sub_14065A150.c)
 *     sub_140A32F88 @ 0x140A32F88 (sub_140A32F88.c)
 *     sub_140A33E74 @ 0x140A33E74 (sub_140A33E74.c)
 */

__int64 __fastcall sub_14065A018(_DWORD *a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _BYTE v9[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp+7h] BYREF
  __int128 v13; // [rsp+58h] [rbp+Fh]
  __int128 v14; // [rsp+68h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  v4 = 0;
  v12 = 0;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  if ( !a2 )
    return v4;
  v9[0] = 0;
  if ( !*a1 )
    goto LABEL_14;
  if ( (int)sub_140A32F88(&qword_140A389D0, a1, v9, &v11) <= 0 )
    goto LABEL_15;
  if ( !v9[0] )
  {
LABEL_14:
    if ( a3 )
      return v4;
LABEL_15:
    *a4 |= 0x20000000u;
    return (unsigned int)-1073740760;
  }
  LODWORD(v10) = 3;
  if ( (int)sub_140A33E74(DWORD2(v11), v11, (unsigned int)&v10, (unsigned int)&qword_140007048, 3, (__int64)&v12) <= 0
    || v12 <= 0
    || !DWORD2(v13)
    || !*(_BYTE *)v14 )
  {
    goto LABEL_15;
  }
  if ( DWORD2(v14) )
  {
    v9[0] = 0;
    v10 = 0LL;
    if ( (int)sub_14065A150(v15, DWORD2(v14), &v10, v9) <= 0 || v9[0] || (unsigned int)(a2 - 1) > v10 )
    {
      *a4 |= 0x8000000u;
      return (unsigned int)-1073740760;
    }
  }
  return v4;
}
