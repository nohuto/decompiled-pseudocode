/*
 * XREFs of ??A?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAAEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x1400819E4
 * Callers:
 *     ?BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@@Z @ 0x140081A70 (-BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
