/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______lambda_4f27881777b3828299edd9a0e9cb6746___ @ 0x18008E218
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180091EE0 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022A28 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::_lambda_4f27881777b3828299edd9a0e9cb6746_ @ 0x18008ED20 (_lambda_4f27881777b3828299edd9a0e9cb6746_--_lambda_4f27881777b3828299edd9a0e9cb6746_.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______lambda_4f27881777b3828299edd9a0e9cb6746___(
        __int64 a1)
{
  _DWORD *v2; // rbx

  v2 = operator new(0x198uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  lambda_4f27881777b3828299edd9a0e9cb6746_::_lambda_4f27881777b3828299edd9a0e9cb6746_(v2 + 2, a1);
  *(_QWORD *)v2 = off_1800E91A8;
  v2[98] = 0;
  `eh vector constructor iterator'(
    v2 + 100,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v2[98] = 0;
  return v2;
}
