/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_WidgetsAppInstallTIP@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_WidgetsAppInstallTIP@@@0@XZ @ 0x1801C365C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_WidgetsAppInstallTIP@@@tip@@QEAA?AV?$test_watcher@U_tip_WidgetsAppInstallTIP@@@2@XZ @ 0x1801CFFBC (-start_and_watch_errors@-$tip_test@U_tip_WidgetsAppInstallTIP@@@tip@@QEAA-AV-$test_watcher@U_tip.c)
 */

__int64 __fastcall tip::start_and_watch_errors<tip::tip_test<_tip_WidgetsAppInstallTIP>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_WidgetsAppInstallTIP>::start_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
