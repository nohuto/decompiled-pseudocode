/*
 * XREFs of sub_140240534 @ 0x140240534
 * Callers:
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BB628 @ 0x1406BB628 (sub_1406BB628.c)
 *     sub_140A218B8 @ 0x140A218B8 (sub_140A218B8.c)
 */

__int64 __fastcall sub_140240534(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  _QWORD v10[18]; // [rsp+30h] [rbp-81h] BYREF
  _DWORD v11[2]; // [rsp+C0h] [rbp+Fh] BYREF
  int v12; // [rsp+C8h] [rbp+17h]
  __int128 v13; // [rsp+D0h] [rbp+1Fh]
  __int128 v14; // [rsp+E0h] [rbp+2Fh]
  __int64 v15; // [rsp+F0h] [rbp+3Fh]

  memset(v10, 0, 0x8CuLL);
  v12 = 0;
  LODWORD(v7) = sub_1406BB628(a1, v10);
  if ( (int)v7 < 0 )
    return (unsigned int)v7;
  if ( a2 && LODWORD(v10[0]) != *a2 )
  {
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  LODWORD(v7) = -1073741823;
  if ( LODWORD(v10[0]) != 1 )
  {
    if ( LODWORD(v10[0]) )
      return (unsigned int)v7;
    v7 = BYTE1(v10[4]) == 0 ? 0xC0000001 : 0;
    if ( !BYTE1(v10[4]) )
      return (unsigned int)v7;
    goto LABEL_6;
  }
  v9 = v10[4] - 0x11D2F81FC12A7328LL;
  if ( v10[4] == 0x11D2F81FC12A7328LL )
    v9 = v10[5] - 0x3BC93EC9A0004BBALL;
  if ( !v9 )
  {
    v7 = 0LL;
LABEL_6:
    if ( a5 )
    {
      v12 = 0;
      v11[0] = 0;
      v11[1] = 0;
      v15 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      LODWORD(v7) = sub_140A218B8(a1, v7, v11);
      if ( (int)v7 >= 0 )
      {
        if ( BYTE10(v13) )
          LODWORD(v7) = -1073741436;
      }
    }
  }
  return (unsigned int)v7;
}
