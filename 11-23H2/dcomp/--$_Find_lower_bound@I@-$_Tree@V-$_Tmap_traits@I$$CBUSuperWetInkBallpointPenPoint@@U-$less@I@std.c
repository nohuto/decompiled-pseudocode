/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460
 * Callers:
 *     ??$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@_N@1@AEAIAEAUSuperWetInkBallpointPenPoint@@@Z @ 0x1800E61CC (--$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBall.c)
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 *     ??$_Try_emplace@AEBIAEAPEAUHSTRING__@@@?$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@_N@1@AEBIAEAPEAUHSTRING__@@@Z @ 0x18019C3D4 (--$_Try_emplace@AEBIAEAPEAUHSTRING__@@@-$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U-$less@.c)
 *     ?AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z @ 0x18019CD1C (-AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z.c)
 *     ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4 (-ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 *     ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0 (-TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
