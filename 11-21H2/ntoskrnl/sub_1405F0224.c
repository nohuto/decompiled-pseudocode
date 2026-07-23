/*
 * XREFs of sub_1405F0224 @ 0x1405F0224
 * Callers:
 *     sub_1405EFB90 @ 0x1405EFB90 (sub_1405EFB90.c)
 * Callees:
 *     sub_1405EFCC4 @ 0x1405EFCC4 (sub_1405EFCC4.c)
 *     sub_1405F06D8 @ 0x1405F06D8 (sub_1405F06D8.c)
 */

char __fastcall sub_1405F0224(unsigned __int64 *a1)
{
  unsigned int v2; // ebp
  unsigned __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r11
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // rdx
  char *i; // rcx
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rax
  __int64 v18; // rdx
  char *j; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 *v22; // rdx
  unsigned __int64 k; // rcx
  struct _KPRCB *v24; // rax
  __int64 v25; // rdx
  char *m; // rcx
  __int64 v27; // r11
  struct _KPRCB *v28; // r9
  __int64 v29; // rdx
  char *n; // rcx
  unsigned __int64 v31; // r11
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  struct _KPRCB *v34; // rax
  __int64 v35; // rdx
  char *ii; // rcx
  unsigned __int64 *v37; // rdx
  unsigned __int64 v38; // rcx
  struct _KPRCB *v39; // rax
  __int64 v40; // rdx
  char *jj; // rcx
  unsigned __int64 *v42; // r8
  signed __int32 v44[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  v3 = a1 + 512;
  v4 = (__int64 *)&off_14000A858;
LABEL_2:
  v5 = *v4;
  v6 = 0x8D4C20E2C148310FuLL;
  v7 = __rdtsc();
  v8 = 0;
  v9 = (unsigned int)v7;
  do
  {
    v10 = (v9 & (1LL << v8)) << v8;
    ++v8;
    v6 ^= v10;
  }
  while ( v8 < 0x20 );
  sub_1405EFCC4(a1, v9, v6, *v4);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((unsigned int *)CurrentPrcb + 58);
  if ( *((_DWORD *)CurrentPrcb + 58) )
  {
    _InterlockedOr(v44, 0);
    for ( i = (char *)((unsigned __int64)a1 & ~(v13 - 1)); i < (char *)v3; i += v13 )
      _mm_clflush(i);
  }
  v15 = a1;
  v16 = v11;
  if ( a1 >= v3 )
  {
LABEL_12:
    v17 = KeGetCurrentPrcb();
    v18 = *((unsigned int *)v17 + 58);
    if ( *((_DWORD *)v17 + 58) )
    {
      _InterlockedOr(v44, 0);
      for ( j = (char *)((unsigned __int64)a1 & ~(v18 - 1)); j < (char *)v3; j += v18 )
        _mm_clflush(j);
    }
    if ( (unsigned __int8)sub_1405F06D8(a1, v18, v11, v5) )
    {
      v22 = a1;
      for ( k = v21; v22 < v3; k = (k >> 4) ^ *(_QWORD *)(v5 + 8 * (k & 0xF)) )
        *v22++ = ~k;
      v24 = KeGetCurrentPrcb();
      v25 = *((unsigned int *)v24 + 58);
      if ( *((_DWORD *)v24 + 58) )
      {
        _InterlockedOr(v44, 0);
        for ( m = (char *)((unsigned __int64)a1 & ~(v25 - 1)); m < (char *)v3; m += v25 )
          _mm_clflush(m);
      }
      sub_1405EFCC4(a1, v25, v21, v20);
      v28 = KeGetCurrentPrcb();
      v29 = *((unsigned int *)v28 + 58);
      if ( *((_DWORD *)v28 + 58) )
      {
        _InterlockedOr(v44, 0);
        for ( n = (char *)((unsigned __int64)a1 & ~(v29 - 1)); n < (char *)v3; n += v29 )
          _mm_clflush(n);
      }
      if ( (unsigned __int8)sub_1405F06D8(a1, v29, v27, v5) )
      {
        v32 = v3;
        v33 = v31;
        do
        {
          *--v32 = ~v33;
          v33 = (v33 >> 4) ^ *(_QWORD *)(v5 + 8 * (v33 & 0xF));
        }
        while ( v32 != a1 );
        v34 = KeGetCurrentPrcb();
        v35 = *((unsigned int *)v34 + 58);
        if ( *((_DWORD *)v34 + 58) )
        {
          _InterlockedOr(v44, 0);
          for ( ii = (char *)((unsigned __int64)a1 & ~(v35 - 1)); ii < (char *)v3; ii += v35 )
            _mm_clflush(ii);
        }
        v37 = v3;
        v38 = v31;
        do
        {
          *--v37 = v38;
          v38 = (v38 >> 4) ^ *(_QWORD *)(v5 + 8 * (v38 & 0xF));
        }
        while ( v37 != a1 );
        v39 = KeGetCurrentPrcb();
        v40 = *((unsigned int *)v39 + 58);
        if ( *((_DWORD *)v39 + 58) )
        {
          _InterlockedOr(v44, 0);
          for ( jj = (char *)((unsigned __int64)a1 & ~(v40 - 1)); jj < (char *)v3; jj += v40 )
            _mm_clflush(jj);
        }
        v42 = v3;
        while ( *((_DWORD *)v42 - 1) == HIDWORD(v31) )
        {
          if ( *(_DWORD *)--v42 != (_DWORD)v31 )
            break;
          v31 = (v31 >> 4) ^ *(_QWORD *)(v5 + 8 * (v31 & 0xF));
          if ( v42 == a1 )
          {
            ++v2;
            ++v4;
            if ( v2 < 5 )
              goto LABEL_2;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    while ( *(_DWORD *)v15 == (_DWORD)v16 )
    {
      *(_DWORD *)v15 = v16;
      if ( *((_DWORD *)v15 + 1) != HIDWORD(v16) )
        break;
      *((_DWORD *)v15++ + 1) = HIDWORD(v16);
      v16 = (v16 >> 4) ^ *(_QWORD *)(v5 + 8 * (v16 & 0xF));
      if ( v15 >= v3 )
        goto LABEL_12;
    }
  }
  return 0;
}
