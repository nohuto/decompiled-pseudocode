/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400080F4
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)SubmixList )
    SubmixList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1400C0978 )
    qword_1400C0978 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  return ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)&SubmixList, a2);
}
