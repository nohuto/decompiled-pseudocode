/*
 * XREFs of sub_140554654 @ 0x140554654
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 * Callees:
 *     sub_140354968 @ 0x140354968 (sub_140354968.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 */

__int64 __fastcall sub_140554654(unsigned int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  char *v9; // rbx
  unsigned int i; // r14d
  __int64 v11; // rcx
  unsigned __int64 *v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r11d
  char *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // [rsp+28h] [rbp-70h] BYREF
  char *v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+B0h] [rbp+18h]

  v26 = a3;
  v4 = a4;
  result = a2;
  v19 = 0LL;
  v7 = a4 + a1[30];
  v23 = v7;
  v8 = v7;
  v21 = v7;
  v9 = (char *)(v7 + 16LL * a1[31]);
  v20 = v9;
  for ( i = 0; i < (unsigned int)result; ++i )
  {
    v11 = i;
    v24 = i;
    v12 = *(unsigned __int64 **)(a3 + 16LL * i + 8);
    v13 = 0;
    while ( 1 )
    {
      v22 = v12;
      if ( v13 >= *(_DWORD *)(a3 + 16 * v11) )
        break;
      result = (v8 - v7) >> 4;
      if ( (unsigned int)result >= a1[31] )
        return result;
      result = v8 + 16;
      if ( v8 + 16 > v4 + (unsigned __int64)a1[1] )
        return result;
      result = sub_140354968(v12[1], *v12, &v19);
      if ( (int)result < 0 )
        return result;
      v17 = &v9[(unsigned int)v19];
      if ( v17 < v9 || (unsigned __int64)v17 > v15 )
        return result;
      *(_QWORD *)v8 = v14;
      *(_DWORD *)(v8 + 8) = (_DWORD)v9 - v16;
      v18 = *((_DWORD *)v12 + 2) - *(_DWORD *)v12;
      *(_DWORD *)(v8 + 12) = v18;
      memmove(v9, (const void *)*v12, v18);
      v9 += *(unsigned int *)(v8 + 12);
      v20 = v9;
      v8 += 16LL;
      v21 = v8;
      ++v13;
      v12 += 2;
      v11 = v24;
      v4 = a4;
      a3 = v26;
    }
    result = a2;
  }
  return result;
}
