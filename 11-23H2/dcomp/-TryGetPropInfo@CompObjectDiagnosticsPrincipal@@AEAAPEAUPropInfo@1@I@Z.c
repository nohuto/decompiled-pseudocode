/*
 * XREFs of ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0
 * Callers:
 *     ?AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019CF70 (-AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSIT.c)
 *     ?AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D1A0 (-AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$sp.c)
 *     ?DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D400 (-DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 *     ?PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019DCD0 (-PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 */

struct CompObjectDiagnosticsPrincipal::PropInfo *__fastcall CompObjectDiagnosticsPrincipal::TryGetPropInfo(
        CompObjectDiagnosticsPrincipal *this,
        unsigned int a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r11
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 7,
    (__int64)v5,
    &v7);
  if ( *(_BYTE *)(v6 + 25) || v2 < *(_DWORD *)(v6 + 32) || v6 == *v3 )
    return 0LL;
  else
    return (struct CompObjectDiagnosticsPrincipal::PropInfo *)(v6 + 40);
}
