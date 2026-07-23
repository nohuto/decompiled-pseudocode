/*
 * XREFs of sub_140339140 @ 0x140339140
 * Callers:
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 *     sub_140338DB0 @ 0x140338DB0 (sub_140338DB0.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     sub_1405B3384 @ 0x1405B3384 (sub_1405B3384.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 */

__int64 __fastcall sub_140339140(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  ULONG_PTR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned int v14; // eax

  v5 = 48 * a1 - 0x220000000000LL;
  v6 = qword_140C51F48;
  a3[2] = v5;
  *a3 = *(_QWORD *)(v6 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((48 * a1) >> 4);
  v8 = *((_DWORD *)sub_1402C1550(v7) + 2);
  *((_DWORD *)a3 + 2) = v8;
  if ( a2 )
  {
    v9 = 5LL;
  }
  else if ( (*(_BYTE *)(v5 + 35) & 8) != 0 )
  {
    v9 = 5LL;
  }
  else
  {
    v9 = *(_BYTE *)(v5 + 35) & 7;
  }
  v10 = qword_140C50710 == 0LL;
  *((_DWORD *)a3 + 6) = v9;
  if ( v10 )
  {
    v11 = 0LL;
  }
  else
  {
    v14 = sub_1403B76EC(v7);
    v8 = *((_DWORD *)a3 + 2);
    v11 = v14;
    v9 = *((unsigned int *)a3 + 6);
  }
  *((_DWORD *)a3 + 7) = v11;
  v12 = 88 * (v9 + 8 * v11 + 37);
  result = *a3;
  a3[4] = *(_QWORD *)(*a3 + 16) + 24512LL * v8 + v12;
  return result;
}
