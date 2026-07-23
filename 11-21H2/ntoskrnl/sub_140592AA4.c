/*
 * XREFs of sub_140592AA4 @ 0x140592AA4
 * Callers:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405AF1CC @ 0x1405AF1CC (sub_1405AF1CC.c)
 */

_DWORD *__fastcall sub_140592AA4(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  bool v9; // zf
  char v10; // cl
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  result = qword_140D06950;
  v2 = 0;
  if ( *(_DWORD *)qword_140D06950 )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(_QWORD *)&result[4 * v2 + 4];
      if ( *(_QWORD *)&result[4 * v2 + 6] )
        break;
LABEL_17:
      if ( ++v2 >= *result )
        return result;
    }
    while ( 1 )
    {
      v6 = 48 * v5 - 0x220000000000LL;
      v7 = 1LL;
      v8 = *(_QWORD *)(v6 + 40);
      if ( (v8 & 0x10000000000LL) != 0 )
        break;
      if ( (*(_BYTE *)(v6 + 34) & 0xC0) == 0x40 )
      {
        v10 = *(_BYTE *)(v6 + 34) & 7;
        if ( v10 == 6 )
        {
          if ( ((v8 >> 60) & 7) == 1
            || (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (v8 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
          {
            goto LABEL_16;
          }
LABEL_15:
          sub_14042A5E0(a1, v5);
          goto LABEL_16;
        }
        if ( (unsigned __int8)(v10 - 2) <= 1u )
        {
          v9 = (*(_DWORD *)(v6 + 16) & 0x400LL) == 0;
LABEL_14:
          if ( v9 )
            goto LABEL_15;
        }
      }
LABEL_16:
      result = qword_140D06950;
      v4 += v7;
      v5 += v7;
      if ( v4 >= *((_QWORD *)qword_140D06950 + 2 * v2 + 3) )
        goto LABEL_17;
    }
    v11 = 0;
    v12 = 0;
    v7 = sub_1405AF1CC(48 * v5 - 0x220000000000LL, &v11, &v12);
    if ( v11 != 6 )
      goto LABEL_16;
    v9 = v12 == 1;
    goto LABEL_14;
  }
  return result;
}
