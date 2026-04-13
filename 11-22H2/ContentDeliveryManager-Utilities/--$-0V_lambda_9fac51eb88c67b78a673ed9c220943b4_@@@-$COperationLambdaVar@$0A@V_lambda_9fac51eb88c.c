/*
 * XREFs of ??$?0V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@@?$COperationLambdaVar@$0A@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@QEAA@$$QEAV_lambda_9fac51eb88c67b78a673ed9c220943b4_@@@Z @ 0x1800242E0
 * Callers:
 *     ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_9fac51eb88c67b78a673ed9c220943b4_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_9fac51eb88c67b78a673ed9c220943b4_@@@Z @ 0x180027C68 (--$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022A28 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a2 + 16) = 1;
  *(_QWORD *)a1 = &Windows::Internal::COperationLambdaVar<0,_lambda_9fac51eb88c67b78a673ed9c220943b4_,Windows::Internal::CHSTRINGResult,>::`vftable';
  *(_DWORD *)(a1 + 32) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 40),
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *(_DWORD *)(a1 + 32) = 0;
  return a1;
}
