/*
 * XREFs of ??$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9B48
 * Callers:
 *     _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x1801F8ACC (_lambda_ceee1b9c54d49ba2255ffab17ffe7895_--operator().c)
 *     _lambda_44f808b4f8bca219e9966f8c039b3597_::operator() @ 0x1804E651C (_lambda_44f808b4f8bca219e9966f8c039b3597_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IWindowBehaviorStatics>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a1;
  *a2 = 0LL;
  (**v3)(v3, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, a2);
  return a2;
}
