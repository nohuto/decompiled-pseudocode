/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0
 * Callers:
 *     ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18008B730 (-HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__.c)
 *     _lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::operator() @ 0x1801AF838 (_lambda_2f79d86dba88adc4f3637a9ed70ae0ec_--operator().c)
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e563fd95344ca67be7b6f27f8cd95fa___::Run @ 0x1801B10B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e563fd95344ca67be7b6f27f8cd95fa___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045D1B0 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18045F700 (-HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@J.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 */

char __fastcall TouchKeyboardExperienceManager::IsSessionShuttingDown(__int64 a1, __int64 a2)
{
  char v2; // bl
  SC_HANDLE v3; // rax

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    a2);
  v2 = 0;
  if ( GetSystemMetrics(0x2000) )
    return 1;
  v3 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( !v3 )
    return GetLastError() == 1115;
  CloseServiceHandle(v3);
  return v2;
}
