/*
 * XREFs of ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000FCB0
 * Callers:
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x14000FC40 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?CommitConnections@CAPONode@@QEAAJXZ @ 0x140011CD4 (-CommitConnections@CAPONode@@QEAAJXZ.c)
 *     ?Add@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_KAEBQEAVCConnectionNode@@@Z @ 0x140012EE4 (-Add@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_KAEBQEAVCConnectionNode.c)
 *     ?Add@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_KAEBQEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@Z @ 0x140012F3C (-Add@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_PR.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(__int64 a1, size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v8; // rax
  void *v9; // rsi
  errno_t v10; // eax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v8 = calloc(a2, 8uLL);
    v9 = v8;
    if ( v8 )
    {
      v10 = memmove_s(v8, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
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
      *(_QWORD *)a1 = v9;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v6 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v6;
    if ( v6 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  return 0;
}
