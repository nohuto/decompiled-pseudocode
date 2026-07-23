/*
 * XREFs of sub_1406A5158 @ 0x1406A5158
 * Callers:
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406A5158(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int *a5)
{
  unsigned int *v5; // rdi
  __int64 v9; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  ULONG_PTR v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+58h] [rbp+38h] BYREF
  int v24; // [rsp+5Ch] [rbp+3Ch]
  int v25; // [rsp+68h] [rbp+48h] BYREF
  int v26; // [rsp+6Ch] [rbp+4Ch]

  v5 = a5;
  *a4 = 0;
  v24 = 0;
  v23 = -1;
  *v5 = 0;
  v25 = -1;
  v26 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 178);
  *v5 = *(_DWORD *)(a1 + 180);
  if ( !a3 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 288);
  if ( !v9 )
    return 0LL;
  if ( v9 != a3 )
    return 0LL;
  *a4 = 0;
  *v5 = 0;
  if ( !*(_DWORD *)(a1 + 280) )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    v11 = sub_1406BF400(v10, *(unsigned int *)(a1 + 284));
  else
    v11 = sub_1407C9820(v10);
  v12 = v11;
  if ( v11 )
  {
    v13 = 0LL;
    if ( *(_DWORD *)(a1 + 280) )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a1 + 32);
        v15 = (*(_BYTE *)(v14 + 140) & 1) != 0
            ? sub_1406BF400(v14, *(unsigned int *)(v12 + 4 * v13))
            : sub_1407C9820(v14);
        v16 = v15;
        if ( !v15 )
          break;
        v17 = 2 * *(_WORD *)(v15 + 2);
        if ( (*(_BYTE *)(v15 + 16) & 1) == 0 )
          v17 = *(_WORD *)(v15 + 2);
        if ( *a4 < (unsigned int)v17 )
          *a4 = v17;
        v18 = *(_DWORD *)(v15 + 4);
        v19 = v18 + 0x80000000;
        if ( v18 < 0x80000000 )
          v19 = *(_DWORD *)(v16 + 4);
        if ( *v5 < v19 )
          *v5 = v19;
        v20 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
          sub_1406BF450(v20, &v25);
        else
          sub_1407C97C0(v20, &v25);
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 280) )
          goto LABEL_27;
      }
      v22 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
        sub_1406BF450(v22, &v23);
      else
        sub_1407C97C0(v22, &v23);
      return 3221225626LL;
    }
LABEL_27:
    v21 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
      sub_1406BF450(v21, &v23);
    else
      sub_1407C97C0(v21, &v23);
    return 0LL;
  }
  return 3221225626LL;
}
