/*
 * XREFs of ?GrowBuffer@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x140082150
 * Callers:
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1400825B0 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v6; // rcx
  void *v7; // rax
  void *v8; // rsi
  errno_t v10; // eax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(int *)(a1 + 24);
    if ( !v6 )
    {
      v6 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v6 = a2 - v4;
    }
    if ( a2 < v4 + v6 )
      a2 = v4 + v6;
    v7 = calloc(a2, 8uLL);
    v8 = v7;
    if ( v7 )
    {
      v10 = memmove_s(v7, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
      if ( v10 )
      {
        if ( v10 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v10 == 22 || v10 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v10 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v8;
      goto LABEL_23;
    }
    return 0;
  }
  if ( *(int *)(a1 + 24) > a2 )
    a2 = *(int *)(a1 + 24);
  v5 = calloc(a2, 8uLL);
  *(_QWORD *)a1 = v5;
  if ( !v5 )
    return 0;
LABEL_23:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
