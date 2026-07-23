/*
 * XREFs of sub_1402E9540 @ 0x1402E9540
 * Callers:
 *     sub_1402E901C @ 0x1402E901C (sub_1402E901C.c)
 *     sub_1402E9070 @ 0x1402E9070 (sub_1402E9070.c)
 * Callees:
 *     sub_1402C14C0 @ 0x1402C14C0 (sub_1402C14C0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 */

__int64 __fastcall sub_1402E9540(int a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rax
  char v10; // cl
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // r10d
  int v16; // r10d
  unsigned int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+2Ch] [rbp-4Ch]
  __int64 v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+3Ch] [rbp-3Ch]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v20 = 0;
  v4 = 48 * a2 - 0x220000000000LL;
  v5 = -9LL;
  v21 = v4;
  v6 = *(_QWORD *)(v4 + 16);
  if ( (v6 & 0x400) == 0 )
    v5 = -134217729LL;
  v7 = v6 & v5;
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v18 = v8;
  v9 = sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4));
  v10 = *(_BYTE *)(v4 + 35);
  v11 = *((unsigned int *)v9 + 2);
  v19 = *((_DWORD *)v9 + 2);
  if ( (v10 & 8) != 0 )
  {
    v12 = 5;
    v13 = 5LL;
  }
  else
  {
    v12 = v10 & 7;
    v13 = v10 & 7;
  }
  v22 = v12;
  if ( qword_140C50710 )
    LODWORD(result) = sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
  else
    LODWORD(result) = 0;
  v23 = result;
  result = (unsigned int)result;
  v24 = *(_QWORD *)(v8 + 16) + 24512 * v11 + 88 * (v13 + 8LL * (unsigned int)result + 37);
  if ( a1 == 3 )
  {
LABEL_8:
    *(_QWORD *)(v4 + 16) = v7;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      result = sub_1402C14C0(&v18, v15);
      if ( v16 != a1 )
        break;
LABEL_15:
      v15 = v16 + 1;
      if ( v15 >= 3 )
        goto LABEL_8;
    }
    v17 = 0;
    while ( a2 != *(_QWORD *)result )
    {
      ++v17;
      result += 8LL;
      if ( v17 >= 0x40 )
        goto LABEL_15;
    }
  }
  return result;
}
