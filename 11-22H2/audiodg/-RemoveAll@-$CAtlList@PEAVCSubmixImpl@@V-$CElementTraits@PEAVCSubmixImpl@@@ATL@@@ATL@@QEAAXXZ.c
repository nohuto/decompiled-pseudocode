/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14002777C
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140002940 (-FreeNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAXPEAVCN.c)
 *     _dynamic_atexit_destructor_for__SubmixList__ @ 0x140036E40 (_dynamic_atexit_destructor_for__SubmixList__.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140002940 (-FreeNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAXPEAVCN.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ECA0 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll(__int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::FreeNode((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
