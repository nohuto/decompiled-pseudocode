/*
 * XREFs of ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18017799C
 * Callers:
 *     _lambda_82ad92f4bbaa298f2056d3bffcd54c39_::operator() @ 0x180191F34 (_lambda_82ad92f4bbaa298f2056d3bffcd54c39_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49b4eef880581468944d4054f829422b___::Run @ 0x1801933D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49b4eef880581468944d4054f829422b___--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

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
