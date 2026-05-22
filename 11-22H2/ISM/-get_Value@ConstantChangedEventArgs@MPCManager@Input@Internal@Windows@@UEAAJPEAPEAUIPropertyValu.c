/*
 * XREFs of ?get_Value@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@5@@Z @ 0x18019B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIPropertyValue@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801904EC (--$copy_to@UIPropertyValue@Foundation@Windows@@@-$com_ptr_t@UIPropertyValue@Foundation@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::get_Value(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        struct Windows::Foundation::IPropertyValue **a2)
{
  wil::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>::copy_to<Windows::Foundation::IPropertyValue>(
    (__int64 *)this + 10,
    a2);
  return 0LL;
}
