/*
 * XREFs of ??$duration_cast@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@_JU?$ratio@$00$0DLJKMKAA@@3@$0A@@chrono@std@@YA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@01@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@01@@Z @ 0x18044E534
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration_cast<std::chrono::duration<__int64,std::ratio<1,1000>>,__int64,std::ratio<1,1000000000>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = (__int64)((unsigned __int128)(*a2 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18;
  result = a1;
  *a1 = (v2 >> 63) + v2;
  return result;
}
