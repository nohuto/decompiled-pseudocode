/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800290A0
 * Callers:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180026748 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EF7C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(_QWORD **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode(v2, a2);
}
