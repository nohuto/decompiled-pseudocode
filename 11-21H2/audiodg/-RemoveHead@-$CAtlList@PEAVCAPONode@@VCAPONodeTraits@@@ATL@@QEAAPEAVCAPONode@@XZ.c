/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x140082564
 * Callers:
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140050FF8 (-FreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead(__int64 **a1)
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
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::FreeNode((__int64)a1, v1);
  return v3;
}
