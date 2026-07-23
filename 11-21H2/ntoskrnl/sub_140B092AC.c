/*
 * XREFs of sub_140B092AC @ 0x140B092AC
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 */

void __fastcall sub_140B092AC(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  int v16; // eax
  bool v17; // zf
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // [rsp+80h] [rbp+18h]

  if ( qword_140D68668 )
  {
    v4 = *(__m128i **)(*(_QWORD *)(a1 + 240) + 2856LL);
    if ( v4 )
    {
      v5 = (qword_140D68668 + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_41:
      v21 = v5 << 12;
      sub_140424F50(v4, v21);
      v4->m128i_i64[0] = v21;
      goto LABEL_42;
    }
    v6 = (qword_140D68668 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v22 = sub_14026B32C(v6 >> 9, 9LL, a3);
    v4 = (__m128i *)v22;
    if ( !v22 )
    {
      qword_140D68668 = 0LL;
LABEL_42:
      qword_140C4E580 = (__int64)v4;
      return;
    }
    v7 = (unsigned __int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = (__int64)&v7[v6 - 1];
    if ( !(unsigned int)sub_14026DC5C((__int64)v7, v8, 0, 9, 0) )
    {
      sub_14026DAB0(v22, ((v8 << 25) + 0x10000000) >> 16, 9);
      v4 = 0LL;
      qword_140D68668 = 0LL;
      goto LABEL_42;
    }
    v9 = a1 + 352;
    v10 = sub_1402CBD10(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
    v5 = 0LL;
    v11 = *(_QWORD *)(v9 + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
        goto LABEL_39;
      i = v11 ^ (v9 | 1);
    }
    else
    {
      i = *(_QWORD *)(v9 + 8);
    }
    if ( i )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(i + 24) != 23 )
          goto LABEL_30;
        v13 = *(_QWORD *)(i + 40);
        v14 = *(_QWORD *)(i + 32);
        if ( v13 + v5 > qword_140D68668 )
          v13 = qword_140D68668 - v5;
        v5 += v13;
        do
        {
          v10 ^= (v10 ^ (v14 << 12)) & 0xFFFFFFFFFF000LL;
          v15 = v10;
          if ( sub_140317A80((unsigned __int64)v7) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v16 = 1;
              if ( HIBYTE(word_140C51864) )
                goto LABEL_26;
              v17 = (v10 & 1) == 0;
            }
            else
            {
              v16 = 0;
              if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
                goto LABEL_26;
              v17 = (v10 & 1) == 0;
            }
            if ( !v17 )
              v15 = v10 | 0x8000000000000000uLL;
          }
          else
          {
            v16 = 0;
          }
LABEL_26:
          *v7 = v15;
          if ( v16 )
            sub_1402294F0((__int64)v7, v15);
          ++v7;
          ++v14;
          --v13;
        }
        while ( v13 );
        if ( v5 == qword_140D68668 )
          goto LABEL_38;
LABEL_30:
        v18 = *(_QWORD ***)(i + 8);
        v19 = i;
        if ( v18 )
        {
          v20 = *v18;
          for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
            i = (unsigned __int64)v20;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v19 )
              break;
            v19 = i;
          }
        }
        if ( !i )
        {
LABEL_38:
          v4 = (__m128i *)v22;
          break;
        }
      }
    }
LABEL_39:
    if ( v5 < qword_140D68668 )
      qword_140D68668 = v5;
    goto LABEL_41;
  }
}
