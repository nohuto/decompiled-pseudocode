/*
 * XREFs of sub_140728CFC @ 0x140728CFC
 * Callers:
 *     sub_1407288D0 @ 0x1407288D0 (sub_1407288D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140728CFC(_BYTE *a1, _BYTE *a2)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // r9d
  _DWORD *v7; // r9
  __int64 v8; // rdx

  if ( *a1 != *a2 )
    return 0;
  if ( a1[2] != a2[2] )
    return 0;
  if ( a1[3] != a2[3] )
    return 0;
  if ( a1[4] != a2[4] )
    return 0;
  if ( a1[5] != a2[5] )
    return 0;
  if ( a1[6] != a2[6] )
    return 0;
  if ( a1[7] != a2[7] )
    return 0;
  v3 = (unsigned __int8)a1[1];
  if ( (_BYTE)v3 != a2[1] )
    return 0;
  v4 = 0LL;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 2);
    if ( !v6 )
      v6 = *((unsigned __int16 *)a1 + 3) - 2816;
    v5 = 5LL;
    if ( v6 )
LABEL_12:
      v5 = 1LL;
    if ( v3 - v5 > 0 )
    {
      v7 = a1 + 8;
      v8 = a2 - a1;
      while ( *v7 == *(_DWORD *)((char *)v7 + v8) )
      {
        ++v4;
        ++v7;
        if ( v4 >= v3 - v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
