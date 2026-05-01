/*
 * XREFs of ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x18043D24C
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x180221B40 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180256D90 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180257050 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 (*__fastcall winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  signed int v3; // ecx

  result = winrt_resume_handler;
  if ( winrt_resume_handler )
    result = (__int64 (*)(void))winrt_resume_handler();
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return result;
}
