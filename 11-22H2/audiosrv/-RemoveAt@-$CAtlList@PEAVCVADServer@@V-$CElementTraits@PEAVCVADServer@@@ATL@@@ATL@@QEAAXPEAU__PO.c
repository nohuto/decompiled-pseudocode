/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800148CC
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)g_VADServerList )
    g_VADServerList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1801CEE58 )
    qword_1801CEE58 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  return ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::FreeNode(&g_VADServerList);
}
