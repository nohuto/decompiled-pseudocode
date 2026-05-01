/*
 * XREFs of ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009F094
 * Callers:
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EEE0 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x1800D45C8 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 *     _lambda_c0abd125640d8caf2efc015e030a0e36_::operator() @ 0x1800EBB58 (_lambda_c0abd125640d8caf2efc015e030a0e36_--operator().c)
 *     _lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator() @ 0x1804E894C (_lambda_fd28b8cfd5332ad6b2a822ae0574fab8_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a1;
  *a2 = 0LL;
  (**v3)(v3, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, a2);
  return a2;
}
