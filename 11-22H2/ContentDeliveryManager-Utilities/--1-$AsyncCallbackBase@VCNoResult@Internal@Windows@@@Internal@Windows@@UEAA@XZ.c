/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18002B674
 * Callers:
 *     _Windows::Internal::COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__Windows::Internal::CHSTRINGResult_::COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__Windows::Internal::CHSTRINGResult___lambda_9fac51eb88c67b78a673ed9c220943b4____::_1_::dtor$0 @ 0x1800D4F66 (_Windows--Internal--COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__Windows--Int.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_ff6e8a7a35a946ff825a6255df1412b0__Windows::Internal::CBasicResult_enum_ContentManagement::SVUpgradeEligibilityState_0___::COperationLambdaVar_0__lambda_ff6e8a7a35a946ff825a6255df1412b0__Windows::Internal::CBasicResult_enum_ContentManagement::SVUpgradeEligibilityState_0_____lambda_ff6e8a7a35a946ff825a6255df1412b0____::_1_::dtor$0 @ 0x1800D4F8E (_Windows--Internal--COperationLambdaVar_0__lambda_ff6e8a7a35a946ff825a6255df1412b0__Windows--Int.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca____::_1_::dtor$1 @ 0x1800D50F1 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_d05d40dcdd1d56fa321a7e7a.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______lambda_4f27881777b3828299edd9a0e9cb6746____::_1_::dtor$1 @ 0x1800D8A9F (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundat.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3____::_1_::dtor$1 @ 0x1800DA432 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CBasicResult_unsigned_char_0__ea_1800DA432.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
