/*
 * XREFs of ??1?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x18002B994
 * Callers:
 *     ??_E?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002EDF0 (--_E-$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Intern.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800227DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::~COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>(
        __int64 a1)
{
  void **result; // rax

  `eh vector destructor iterator'(
    (void *)(a1 + 40),
    8uLL,
    1,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
