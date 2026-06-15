/*
 * XREFs of ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140012DBC
 * Callers:
 *     ??4CAPONode@@QEAAXAEAV0@@Z @ 0x140012A00 (--4CAPONode@@QEAAXAEAV0@@Z.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14008E9BC (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x140012E60 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // rdx
  size_t v7; // rbp
  void *v8; // rax
  unsigned __int64 v10; // rcx
  void *v11; // rax
  void *v12; // r14
  errno_t v13; // eax

  v3 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v6 )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    v10 = *(int *)(a1 + 24);
    if ( !v10 )
    {
      v10 = v6 >> 1;
      if ( a2 - v6 > v6 >> 1 )
        v10 = a2 - v6;
    }
    v7 = a2;
    if ( a2 < v6 + v10 )
      v7 = v6 + v10;
    v11 = calloc(v7, 8uLL);
    v12 = v11;
    if ( v11 )
    {
      v13 = memmove_s(v11, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
      if ( v13 )
      {
        if ( v13 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v13 == 22 || v13 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v13 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v12;
      goto LABEL_7;
    }
  }
  else
  {
    v7 = a2;
    if ( *(int *)(a1 + 24) > a2 )
      v7 = *(int *)(a1 + 24);
    v8 = calloc(v7, 8uLL);
    *(_QWORD *)a1 = v8;
    if ( v8 )
    {
LABEL_7:
      *(_QWORD *)(a1 + 16) = v7;
LABEL_8:
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
        a1,
        v6,
        a3);
LABEL_9:
      v3 = a2;
LABEL_10:
      *(_QWORD *)(a1 + 8) = v3;
      return 1;
    }
  }
  return 0;
}
