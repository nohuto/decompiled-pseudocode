/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140009EC8
 * Callers:
 *     ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x140009E58 (-RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r8
  __int64 result; // rax
  bool v5; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *a2;
  if ( a2 == *a1 )
    *a1 = (__int64 *)v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  result = (__int64)a1[4];
  *a2 = result;
  a1[4] = a2;
  v5 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  if ( v5 )
    return ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll();
  return result;
}
