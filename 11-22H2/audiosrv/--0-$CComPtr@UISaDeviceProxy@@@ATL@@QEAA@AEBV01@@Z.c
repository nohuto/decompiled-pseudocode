/*
 * XREFs of ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800D840C
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1cd5aad941324031a7770e11832089b3___ @ 0x18006ABF8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006ABF8.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_375715949059ca002adeaf36d6f47e10___ @ 0x18006ACD4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006ACD4.c)
 *     _lambda_375715949059ca002adeaf36d6f47e10_::_lambda_375715949059ca002adeaf36d6f47e10_ @ 0x18006B028 (_lambda_375715949059ca002adeaf36d6f47e10_--_lambda_375715949059ca002adeaf36d6f47e10_.c)
 *     _lambda_52036531a809c6efb737b3592d012028_::operator() @ 0x18006B250 (_lambda_52036531a809c6efb737b3592d012028_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
