/*
 * XREFs of std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x180088DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VSystemContextEndpoint@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextEndpoint@@@Z @ 0x180087154 (--0-$com_ptr_t@VSystemContextEndpoint@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextEn.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801DDC40;
  wil::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>(
    a2 + 1,
    *(_QWORD *)(a1 + 8));
  return a2;
}
