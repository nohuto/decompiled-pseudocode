/*
 * XREFs of _std::vector_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy____::_1_::catch$7 @ 0x18005672F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800894A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy____::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 120), 8LL * *(_QWORD *)(a2 + 112));
  throw;
}
