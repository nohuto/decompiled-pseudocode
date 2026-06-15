/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002864
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002378C (-FreeNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ECA0 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002378C (-FreeNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll(
        __int64 a1)
{
  ATL::CAtlPlex *v2; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(ATL::CAtlPlex **)(a1 + 24);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
