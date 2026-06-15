/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x1400126B8
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x140012544 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EEB0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000EBD0 (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  bool v5; // zf

  v1 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *v1;
  v4 = v1[2];
  *a1 = (__int64 *)*v1;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    a1[1] = 0LL;
  *v1 = (__int64)a1[4];
  v5 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  a1[4] = v1;
  if ( v5 )
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)a1);
  return v4;
}
