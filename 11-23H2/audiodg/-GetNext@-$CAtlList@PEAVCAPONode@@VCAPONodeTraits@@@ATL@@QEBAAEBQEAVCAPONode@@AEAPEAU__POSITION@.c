/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAAEBQEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x140039BB4
 * Callers:
 *     ?BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@@Z @ 0x140039AEA (-BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
