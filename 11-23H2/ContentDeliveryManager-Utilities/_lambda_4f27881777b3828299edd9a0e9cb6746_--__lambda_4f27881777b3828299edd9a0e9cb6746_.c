/*
 * XREFs of _lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_ @ 0x18008F9D4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______ @ 0x18008FC78 (Windows--Internal--COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows--Inte.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180091EE0 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______lambda_4f27881777b3828299edd9a0e9cb6746____::_1_::dtor$2 @ 0x1800D8A61 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Win_ea_1800D8A61.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$5 @ 0x1800D8D73 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800D8D73.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002C744 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004AFA0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18008FE34 (--1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  volatile int *v3; // rdx
  __int64 v4; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 376);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)(a1 + 48));
  Windows::Internal::String::~String((HSTRING *)(a1 + 32));
  Windows::Internal::String::~String((HSTRING *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v4,
      v3);
  }
}
