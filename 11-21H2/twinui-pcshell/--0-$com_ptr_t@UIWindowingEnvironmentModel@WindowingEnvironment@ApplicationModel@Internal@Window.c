/*
 * XREFs of ??0?$com_ptr_t@UIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18010A520
 * Callers:
 *     _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180108738 (_lambda_37b02de6af5cc70082ddb03b5db08654_--operator().c)
 *     ??0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@W4WindowingEnvironmentType@@@Z @ 0x1801094F4 (--0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
