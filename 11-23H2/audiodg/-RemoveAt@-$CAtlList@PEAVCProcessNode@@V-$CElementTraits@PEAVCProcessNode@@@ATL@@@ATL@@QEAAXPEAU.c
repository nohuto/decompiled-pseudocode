/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000AC60
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x14001468C (-RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  return ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode(v2);
}
