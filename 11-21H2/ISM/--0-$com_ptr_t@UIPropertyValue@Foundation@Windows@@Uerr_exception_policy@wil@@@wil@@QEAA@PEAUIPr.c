/*
 * XREFs of ??0?$com_ptr_t@UIPropertyValue@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180164394
 * Callers:
 *     ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x180164484 (--0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHStri.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
