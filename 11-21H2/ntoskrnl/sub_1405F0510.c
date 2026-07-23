/*
 * XREFs of sub_1405F0510 @ 0x1405F0510
 * Callers:
 *     sub_1405EFB90 @ 0x1405EFB90 (sub_1405EFB90.c)
 * Callees:
 *     sub_1405EFCF8 @ 0x1405EFCF8 (sub_1405EFCF8.c)
 */

char __fastcall sub_1405F0510(int a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  int v6; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  _DWORD *i; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // rdx
  char *j; // rcx
  struct _KPRCB *v16; // rax
  __int64 v17; // rdx
  char *k; // rcx
  _DWORD *m; // rcx
  signed __int32 v21[22]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a4 + 4096;
  v6 = 0;
  v9 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  while ( 2 )
  {
    v10 = (unsigned int)(2 * v6 - v9);
    v11 = (unsigned int)v10;
    if ( (unsigned int)v9 > 2 * v6 )
      v11 = (unsigned int)(v10 + 12);
    for ( i = (_DWORD *)(a4 + 4 * v11); (unsigned __int64)i < v5; i += 12 )
    {
      *i = a1;
      i[1] = a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *((unsigned int *)CurrentPrcb + 58);
    if ( *((_DWORD *)CurrentPrcb + 58) )
    {
      _InterlockedOr(v21, 0);
      for ( j = (char *)(a4 & ~(v14 - 1)); (unsigned __int64)j < v5; j += v14 )
        _mm_clflush(j);
    }
    sub_1405EFCF8(a2, v6, a3, a4);
    v16 = KeGetCurrentPrcb();
    v17 = *((unsigned int *)v16 + 58);
    if ( *((_DWORD *)v16 + 58) )
    {
      _InterlockedOr(v21, 0);
      for ( k = (char *)(a4 & ~(v17 - 1)); (unsigned __int64)k < v5; k += v17 )
        _mm_clflush(k);
    }
    if ( (unsigned int)v9 > 2 * v6 )
      v10 = (unsigned int)(v10 + 12);
    for ( m = (_DWORD *)(a4 + 4 * v10); (unsigned __int64)m < v5; m += 12 )
    {
      if ( *m != a1 || m[1] != a1 )
        return 0;
    }
    if ( (unsigned int)++v6 < 6 )
      continue;
    break;
  }
  return 1;
}
