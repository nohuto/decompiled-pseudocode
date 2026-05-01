/*
 * XREFs of ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180041FF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___::Run @ 0x180041EA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___--Run.c)
 *     _lambda_4c9b4ecc162b37675afada1bdb63893a_::operator() @ 0x180041F00 (_lambda_4c9b4ecc162b37675afada1bdb63893a_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_df65db57_d504_456e_8bd7_004ce308d8d9,
    a2);
  return a2;
}
