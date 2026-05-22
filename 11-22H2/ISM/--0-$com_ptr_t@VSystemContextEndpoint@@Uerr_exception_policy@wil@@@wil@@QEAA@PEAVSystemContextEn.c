/*
 * XREFs of ??0?$com_ptr_t@VSystemContextEndpoint@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextEndpoint@@@Z @ 0x1800B0868
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800B08A4 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x1800B2630 (std--_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft--_ea_1800B2630.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
  return a1;
}
