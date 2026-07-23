/*
 * XREFs of IoCheckLinkShareAccess @ 0x14074B530
 * Callers:
 *     IoCheckShareAccess @ 0x14074B2A0 (IoCheckShareAccess.c)
 *     sub_14074BC84 @ 0x14074BC84 (sub_14074BC84.c)
 *     sub_1407F7D6C @ 0x1407F7D6C (sub_1407F7D6C.c)
 *     IoCheckShareAccessEx @ 0x14080C840 (IoCheckShareAccessEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  bool v6; // r13
  bool v7; // al
  int v8; // r11d
  bool v9; // r15
  bool v10; // r12
  unsigned __int8 v11; // si
  _DWORD *v12; // rax
  bool v13; // al
  bool v14; // zf
  char v16; // al
  bool v17; // [rsp+50h] [rbp+20h]

  v6 = (a1 & 0x21) != 0;
  v7 = (a1 & 6) != 0;
  v8 = a1 & 0x10000;
  v17 = (a1 & 0x10000) != 0;
  if ( a4 )
  {
LABEL_2:
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 74) = v6;
      *(_BYTE *)(a3 + 75) = v7;
      *(_BYTE *)(a3 + 76) = v8 != 0;
    }
    if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v8 && (a6 & 0x20) == 0 )
      return 0LL;
    v9 = (a2 & 2) != 0;
    v10 = (a2 & 4) != 0;
    v11 = a2 & 1;
    if ( a6 < 0 )
    {
      v16 = a2 & 1;
      if ( !v11 )
        v16 = 1;
      v11 = v16;
    }
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 77) = v11;
      *(_BYTE *)(a3 + 78) = v9;
      *(_BYTE *)(a3 + 79) = v10;
    }
    if ( a3 )
    {
      v12 = *(_DWORD **)(a3 + 208);
      if ( v12 )
      {
        if ( (*v12 & 1) != 0 )
          return 0LL;
      }
    }
    v13 = 0;
    if ( (a6 & 4) == 0 )
      v13 = (a1 & 0x21) != 0 && a4[4] < *a4 || a4[1] && !v11;
    if ( (a6 & 8) == 0 && !v13 )
      v13 = (a1 & 6) != 0 && a4[5] < *a4 || a4[2] && (a2 & 2) == 0;
    if ( (a6 & 0x10) != 0 )
    {
      if ( v13 )
        return 3221225539LL;
    }
    else
    {
      if ( v13 )
        return 3221225539LL;
      if ( !a5 || (a6 & 0x40) != 0 )
      {
        if ( v8 && a4[6] < *a4 )
          return 3221225539LL;
        v14 = a4[3] == 0;
      }
      else
      {
        if ( v8 && a5[2] < *a5 )
          return 3221225539LL;
        v14 = a5[1] == 0;
      }
      if ( !v14 && (a2 & 4) == 0 )
        return 3221225539LL;
    }
    if ( (a6 & 1) != 0 )
    {
      ++*a4;
      a4[3] += v17;
      a4[1] += v6;
      a4[2] += (a1 & 6) != 0;
      a4[4] += v11;
      a4[5] += v9;
      a4[6] += v10;
      if ( a5 )
      {
        ++*a5;
        if ( (a6 & 0x80u) == 0 )
          a5[1] += v17;
        a5[2] += v10;
      }
    }
    return 0LL;
  }
  if ( (a6 & 0xC) == 0xC && ((a6 & 0x10) != 0 || a5 && (a6 & 0x40) == 0) )
  {
    v7 = (a1 & 6) != 0;
    goto LABEL_2;
  }
  return 3221225485LL;
}
