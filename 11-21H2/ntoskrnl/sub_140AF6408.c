/*
 * XREFs of sub_140AF6408 @ 0x140AF6408
 * Callers:
 *     sub_140AF5AE4 @ 0x140AF5AE4 (sub_140AF5AE4.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF673C @ 0x140AF673C (sub_140AF673C.c)
 */

__int64 __fastcall sub_140AF6408(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  ULONG_PTR v13; // rbp
  ULONG_PTR v14; // r14
  __int64 v15; // rsi
  ULONG_PTR v16; // r13
  __int64 v17; // rdi
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  _QWORD *v21; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+68h] [rbp+10h]

  memset(a2, 0, 0x200uLL);
  v4 = 0xFFFFFFFFLL;
  v5 = a1 + 352;
  v22 = -1LL;
  v6 = -1LL;
  v7 = -1LL;
  v8 = *(_QWORD *)(v5 + 8);
  if ( (v8 & 1) != 0 )
  {
    if ( v8 == 1 )
      goto LABEL_7;
    v20 = v8 ^ (v5 | 1);
  }
  else
  {
    v20 = *(_QWORD *)(v5 + 8);
  }
  v21 = (_QWORD *)v20;
  if ( v20 )
  {
    while ( 1 )
    {
      v11 = *(int *)(v20 + 24);
      if ( (unsigned int)v11 > 0x2A || (v12 = 0x5C5C0C00048LL, !_bittest64(&v12, v11)) )
      {
        v13 = *(_QWORD *)(v20 + 40);
        v14 = *(_QWORD *)(v20 + 32);
        if ( v13 )
          break;
      }
LABEL_18:
      v18 = *(_QWORD **)(v20 + 8);
      v19 = v20;
      if ( v18 )
      {
        v9 = (_QWORD *)*v18;
        v20 = *(_QWORD *)(v20 + 8);
        v21 = v18;
        if ( *v18 )
        {
          do
          {
            v20 = (unsigned __int64)v9;
            v21 = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v21 = (_QWORD *)v20;
        if ( v20 )
        {
          do
          {
            if ( *(_QWORD *)v20 == v19 )
              break;
            v19 = v20;
            v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( v20 );
          v21 = (_QWORD *)v20;
        }
      }
      if ( !v20 )
      {
        v6 = v22;
        goto LABEL_7;
      }
    }
    v15 = v22;
    while ( 1 )
    {
      v16 = sub_1403B7A10(v14, v13);
      v17 = *((unsigned int *)sub_1402C1550(v14) + 2);
      if ( v7 != -1 )
      {
        if ( (_DWORD)v17 == (_DWORD)v4
          && (((unsigned __int64)(48 * v7) >> 18) & 0x3FFFFFF8) - 0x904BFFFFFF8LL >= (((48 * v14) >> 18) & 0x3FFFFFF8)
                                                                                   - 0x904C0000000LL )
        {
          goto LABEL_16;
        }
        *((_QWORD *)a2 + (unsigned int)v4) += sub_140AF673C(v15, v7);
      }
      v15 = v14;
LABEL_16:
      v7 = v14 + v16;
      v4 = v17;
      v14 += v16;
      v13 -= v16;
      if ( !v13 )
      {
        v22 = v15;
        v20 = (unsigned __int64)v21;
        goto LABEL_18;
      }
    }
  }
LABEL_7:
  result = sub_140AF673C(v6, v7);
  *((_QWORD *)a2 + v4) += result;
  return result;
}
