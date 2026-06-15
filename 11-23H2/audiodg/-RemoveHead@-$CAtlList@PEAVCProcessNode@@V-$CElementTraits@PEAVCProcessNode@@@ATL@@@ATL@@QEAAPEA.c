/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14000C4AC
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14005C120 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000AD0C (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *a1 = (__int64 *)*v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode((__int64)a1, v1);
  return v3;
}
