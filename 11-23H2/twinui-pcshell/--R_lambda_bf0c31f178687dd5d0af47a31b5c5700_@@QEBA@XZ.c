/*
 * XREFs of ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1800D9264
 * Callers:
 *     ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x180391824 (--1-$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800D9228 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 */

void __fastcall _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()(__int64 **a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*a1 + 10);
  AcquireSRWLockExclusive(v2);
  std::vector<winrt::immersive_shell_component::service_description>::swap(*a1 + 6, a1[1]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
