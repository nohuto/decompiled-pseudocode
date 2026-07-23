/*
 * XREFs of FilterEvalImpliedAnd @ 0x14078D828
 * Callers:
 *     FilterEval @ 0x140788650 (FilterEval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PropertyEval @ 0x140789FD0 (PropertyEval.c)
 */

__int64 __fastcall FilterEvalImpliedAnd(
        __int64 (__fastcall *a1)(__int64, __int64, unsigned int *, unsigned int *, wchar_t **),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int *a5)
{
  int *v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v10; // ebp
  __int64 (__fastcall *v12)(__int64, __int64, unsigned int *, unsigned int *, wchar_t **); // r10
  wchar_t **v13; // rdi
  unsigned int v14; // eax
  unsigned int v16; // [rsp+40h] [rbp-48h] BYREF
  wchar_t *v17; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v16 = 0;
  v7 = 0;
  v17 = 0LL;
  v19 = 0;
  *a5 = 0;
  v10 = 1;
  v12 = a1;
  if ( a3 )
  {
    v13 = (wchar_t **)(a4 + 48);
    while ( (*(_DWORD *)(v13 - 6) & 0xFF00000) == 0 )
    {
      v14 = v12(a2, 56LL * v7 + a4 + 8, &v16, &v19, &v17);
      v6 = v14;
      if ( v14 == -1073741275 )
      {
        v6 = 0;
        v10 = 0;
      }
      else
      {
        if ( v14 )
          goto LABEL_10;
        PropertyEval(v16, v17, v19, *((_DWORD *)v13 - 12), *((_DWORD *)v13 - 2), *v13, *((_DWORD *)v13 - 1), v5);
        if ( *v5 == v6 )
          return 0LL;
      }
      v12 = a1;
      ++v7;
      v13 += 7;
      if ( v7 >= a3 )
        goto LABEL_10;
    }
    v6 = -1073741811;
LABEL_10:
    if ( !v10 && !v6 )
      return (unsigned int)-1073741823;
  }
  return v6;
}
