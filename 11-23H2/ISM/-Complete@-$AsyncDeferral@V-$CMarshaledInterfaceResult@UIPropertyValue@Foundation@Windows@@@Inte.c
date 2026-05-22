/*
 * XREFs of ?Complete@?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAAXJ@Z @ 0x1801863A4
 * Callers:
 *     _lambda_07471f410bb64c4d3d31f6ab24fa2971_::operator() @ 0x1801847E8 (_lambda_07471f410bb64c4d3d31f6ab24fa2971_--operator().c)
 *     _lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::operator() @ 0x180184D34 (_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Do_call @ 0x18018CCC0 (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Do_call.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::Complete(
        __int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v1);
}
