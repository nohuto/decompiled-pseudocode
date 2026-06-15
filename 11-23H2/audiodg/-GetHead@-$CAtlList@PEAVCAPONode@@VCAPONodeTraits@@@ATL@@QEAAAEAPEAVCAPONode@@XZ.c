/*
 * XREFs of ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140025358
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008EC7C (--1CAudioProcessor@@QEAA@XZ.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(_QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
