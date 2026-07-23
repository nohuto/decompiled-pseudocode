/*
 * XREFs of sub_14020DC34 @ 0x14020DC34
 * Callers:
 *     sub_14020DB50 @ 0x14020DB50 (sub_14020DB50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14020DC34(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int8 *v3; // rcx
  __int64 v4; // r12
  int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r13d
  unsigned __int8 v14; // r11
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned __int8 v17; // r11
  signed int v18; // edx
  __int64 v19; // r11
  _QWORD *k; // rcx
  signed int v22; // ebx
  __int64 v23; // rdx
  _QWORD *i; // rcx
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // r15
  int v28; // ebp
  char j; // bl
  int v30; // edx
  signed int v31; // esi
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  unsigned __int8 *v34; // [rsp+40h] [rbp+8h]
  unsigned int v35; // [rsp+58h] [rbp+20h]

  v2 = *a1;
  v3 = (unsigned __int8 *)a1[1];
  v4 = v2 & 7;
  v5 = 0;
  v6 = 0;
  v35 = 0;
  v8 = 0;
  LODWORD(v9) = 0;
  v10 = (v2 >> 3) + ((v2 & 7) != 0);
  if ( !v10 )
    return v8;
  v11 = 0LL;
  v12 = v10 - 1;
  v13 = 0;
  do
  {
    v14 = *v3++;
    v34 = v3;
    if ( v11 == v12 && v4 )
      v14 |= byte_140015C40[v4];
    if ( !v14 )
    {
      LODWORD(v9) = v9 + 8;
      goto LABEL_10;
    }
    v15 = *((unsigned __int8 *)qword_140018E00 + v14);
    v16 = v15 + v9;
    if ( v16 )
    {
      if ( !v8 )
      {
        v8 = 1;
LABEL_22:
        v22 = v8 - 2;
        v23 = (int)(v8 - 2);
        for ( i = (_QWORD *)(a2 + 8 + 8 * v23); v23 >= 0 && *((_DWORD *)i - 1) < v16; --i )
        {
          --v22;
          --v23;
          *i = *(i - 1);
        }
        v25 = v22;
        v6 = v35;
        *(_DWORD *)(a2 + 8 * v25 + 12) = v16;
        *(_DWORD *)(a2 + 8 * v25 + 8) = v5;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v16 )
        goto LABEL_22;
    }
LABEL_8:
    v9 = *((unsigned __int8 *)&qword_140018E00[64] + v14);
    v5 = v13 - v9 + 8;
    v17 = *((_BYTE *)&qword_140015C48 - v9) | byte_140018DF0[v15] | v14;
    if ( v17 != 0xFF )
    {
      do
      {
        v26 = v8;
        if ( v8
          && *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) >= (unsigned int)*((unsigned __int8 *)&qword_140018E00[32] + v17) )
        {
          break;
        }
        v27 = *((unsigned __int8 *)&qword_140018E00[32] + v17);
        v28 = 0;
        for ( j = byte_140018DF0[v27]; ((unsigned __int8)j & v17) != 0; j *= 2 )
          ++v28;
        ++v8;
        v30 = *((unsigned __int8 *)&qword_140018E00[32] + v17);
        if ( v26 )
          v8 = v26;
        v31 = v8 - 2;
        v32 = (int)(v8 - 2);
        v33 = (_QWORD *)(a2 + 8 + 8 * v32);
        while ( v32 >= 0 )
        {
          v30 = v27;
          if ( *((_DWORD *)v33 - 1) >= (unsigned int)v27 )
            break;
          --v31;
          --v32;
          *v33 = *(v33 - 1);
          --v33;
        }
        v17 |= j;
        *(_DWORD *)(a2 + 8LL * v31 + 12) = v30;
        *(_DWORD *)(a2 + 8LL * v31 + 8) = v28 + v13;
      }
      while ( v17 != 0xFF );
      v5 = v13 - v9 + 8;
      v6 = v35;
    }
    v3 = v34;
    v12 = v10 - 1;
LABEL_10:
    ++v6;
    v13 += 8;
    v11 = v6;
    v35 = v6;
  }
  while ( v6 < v10 );
  if ( (_DWORD)v9 )
  {
    if ( v8 )
    {
      if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < (unsigned int)v9 )
        goto LABEL_14;
    }
    else
    {
      v8 = 1;
LABEL_14:
      v18 = v8 - 2;
      v19 = (int)(v8 - 2);
      for ( k = (_QWORD *)(a2 + 8 + 8 * v19); v19 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v9; --k )
      {
        --v18;
        --v19;
        *k = *(k - 1);
      }
      *(_DWORD *)(a2 + 8LL * v18 + 12) = v9;
      *(_DWORD *)(a2 + 8LL * v18 + 8) = v5;
    }
  }
  return v8;
}
