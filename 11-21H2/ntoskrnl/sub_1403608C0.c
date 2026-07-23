/*
 * XREFs of sub_1403608C0 @ 0x1403608C0
 * Callers:
 *     sub_1407DECE0 @ 0x1407DECE0 (sub_1407DECE0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_1403608C0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  unsigned int v7; // r10d
  __int64 *v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // r11
  __int64 *v11; // r9
  __int64 v12; // rbx
  __int64 *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  unsigned int v18; // r9d
  unsigned __int64 v19; // r8
  unsigned __int64 *result; // rax
  unsigned int v21; // ebp
  __int64 *v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 *v24; // r8
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rsi
  _QWORD *v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // rax

  v7 = a3;
  v8 = (__int64 *)(*(_QWORD *)(a1 + 16) + 24512LL * a2);
  if ( a3 == 4 )
    v9 = v8[2826];
  else
    v9 = v8[a3 + 2822];
  do
  {
    if ( dword_140D05004 == 1 || v7 == 4 )
    {
      v10 = v8[2820];
      v11 = qword_14001C780;
      v12 = v8[2821];
      v13 = v8;
      v14 = 3LL;
      do
      {
        v15 = *v11++;
        v16 = *v13;
        v13 += 134;
        v10 += v15 * v16;
        v12 += v15 * *(v13 - 133);
        --v14;
      }
      while ( v14 );
      v17 = dword_140D05004;
      if ( v7 == 4 )
        goto LABEL_8;
    }
    else
    {
      v24 = qword_14001C780;
      v25 = 3LL;
      v10 = v8[2 * v7 + 2840];
      v26 = (__int64)&v8[4 * v7 + 6];
      v12 = v8[2 * v7 + 2841];
      do
      {
        v27 = *v24;
        v28 = (_QWORD *)v26;
        v29 = 4LL;
        do
        {
          v30 = *v28 + v28[32];
          ++v28;
          v10 += v27 * v30;
          v12 += v27 * (v28[15] + v28[47]);
          --v29;
        }
        while ( v29 );
        ++v24;
        v26 += 1072LL;
        --v25;
      }
      while ( v25 );
    }
    v17 = v7 + 1;
LABEL_8:
    v18 = 0;
    if ( v7 != 4 )
      v18 = v7;
    v19 = 0LL;
    v7 = v18;
LABEL_11:
    if ( v18 != v17 )
    {
      v21 = 0;
      v22 = &v8[88 * v18 + 407];
      while ( 1 )
      {
        v23 = v19 + *v22;
        if ( v23 < v19 || v23 == -1LL )
          break;
        ++v21;
        v22 += 11;
        v19 = v23;
        if ( v21 >= 8 )
        {
          ++v18;
          goto LABEL_11;
        }
      }
      v19 = -2LL;
    }
  }
  while ( v12 + v19 + v10 > v9 );
  *a5 = v12;
  result = a6;
  *a4 = v10;
  *a6 = v19;
  return result;
}
