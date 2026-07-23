/*
 * XREFs of sub_1403717D4 @ 0x1403717D4
 * Callers:
 *     RtlFreeHeap @ 0x140371770 (RtlFreeHeap.c)
 *     sub_1405E5190 @ 0x1405E5190 (sub_1405E5190.c)
 * Callees:
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_140371924 @ 0x140371924 (sub_140371924.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405EA0E4 @ 0x1405EA0E4 (sub_1405EA0E4.c)
 *     sub_1405EADE8 @ 0x1405EADE8 (sub_1405EADE8.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 sub_1403717D4(_DWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned __int16 v14; // dx
  int v15; // ecx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v3 = 0;
  if ( a1[4] == -857879331 )
  {
    LODWORD(v22) = 0;
    v7 = sub_140371924(a3);
    return (unsigned int)sub_14034CEB0((__int64)(a1 + 16), 0LL, a2, a1[5] | v7, (unsigned int *)va);
  }
  if ( (a1[30] & 1) != 0 )
  {
    v9 = sub_1405EADE8();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v11 = 9;
    }
    else
    {
      v9 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
      if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
        goto LABEL_13;
      v10 = v9;
      v11 = 8;
    }
    sub_1405F1BBC(v11, (_DWORD)a1, v10, 0, 0LL, 0LL);
    v9 = 0LL;
  }
LABEL_13:
  if ( !v9 )
    return v3;
  if ( *(_BYTE *)(a2 - 1) != 5 )
    return (unsigned __int8)sub_1405EA0E4(a1, a3 | 2, v9);
  if ( !a1[31] )
    goto LABEL_21;
  v21 = *(_DWORD *)(v9 + 8) ^ a1[34];
  if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(BYTE1(v21) ^ BYTE2(v21))) )
  {
LABEL_33:
    sub_1405F1BBC(3, (_DWORD)a1, v9, a2, 0LL, 0LL);
    return v3;
  }
  if ( a1[31] )
  {
    v12 = *(_DWORD *)(v9 + 8);
    v13 = a1[31];
    LOWORD(v19) = v12;
    if ( (v13 & v12) != 0 )
      v19 = a1[34] ^ v12;
    v14 = v19;
  }
  else
  {
LABEL_21:
    v14 = *(_WORD *)(v9 + 8);
    v13 = 0;
  }
  if ( *(_BYTE *)(v9 + 15) == 4 )
  {
    if ( v13 )
    {
      v15 = *(_DWORD *)(v9 + 8);
      LOWORD(v20) = v15;
      if ( (v15 & a1[31]) != 0 )
        v20 = a1[34] ^ v15;
      v16 = v20;
    }
    else
    {
      v16 = *(_WORD *)(v9 + 8);
    }
    v17 = v14 + *(_QWORD *)(v9 - 16) - v16;
  }
  else
  {
    v17 = 16LL * v14;
  }
  if ( v17 + v9 < a2 )
    goto LABEL_33;
  v18 = *(_DWORD *)(a2 - 8);
  if ( (a3 & 0x3C000102) != 0 || v18 && (_WORD)v18 == 1 && (int)sub_14042A5E0(a1, a2) >= 0 )
    return (unsigned __int8)sub_1405EA0E4(a1, a3 | 2, v9);
  return v3;
}
