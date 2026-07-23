/*
 * XREFs of sub_1405F0120 @ 0x1405F0120
 * Callers:
 *     sub_1405EFB90 @ 0x1405EFB90 (sub_1405EFB90.c)
 * Callees:
 *     sub_1405F068C @ 0x1405F068C (sub_1405F068C.c)
 */

char __fastcall sub_1405F0120(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  _DWORD *v5; // r11
  unsigned __int64 v7; // r8
  char v8; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // rdx
  char *i; // rcx
  char result; // al
  unsigned __int64 v13; // r9
  int v14; // r10d
  struct _KPRCB *v15; // rax
  __int64 v16; // rdx
  char *j; // rcx
  _DWORD *v18; // rax
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (_DWORD *)a3;
  v7 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *v5 = a1;
    v7 = 1023LL;
    ++v5;
  }
  memset64(v5, a1 | ((unsigned __int64)a1 << 32), v7 >> 1);
  v8 = 1;
  if ( (v7 & 1) != 0 )
    v5[v7 - 1] = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = *((unsigned int *)CurrentPrcb + 58);
  if ( *((_DWORD *)CurrentPrcb + 58) )
  {
    _InterlockedOr(v19, 0);
    for ( i = (char *)(a3 & ~(v10 - 1)); (unsigned __int64)i < a3 + 4096; i += v10 )
      _mm_clflush(i);
  }
  result = sub_1405F068C(a1, a2, a3);
  if ( result )
  {
    v15 = KeGetCurrentPrcb();
    v16 = *((unsigned int *)v15 + 58);
    if ( *((_DWORD *)v15 + 58) )
    {
      _InterlockedOr(v19, 0);
      for ( j = (char *)(v13 & ~(v16 - 1)); (unsigned __int64)j < v13 + 4096; j += v16 )
        _mm_clflush(j);
    }
    v18 = (_DWORD *)(v13 + 4096);
    while ( *--v18 == a2 )
    {
      *v18 = v14;
      if ( v18 == (_DWORD *)v13 )
        return v8;
    }
    return 0;
  }
  return result;
}
