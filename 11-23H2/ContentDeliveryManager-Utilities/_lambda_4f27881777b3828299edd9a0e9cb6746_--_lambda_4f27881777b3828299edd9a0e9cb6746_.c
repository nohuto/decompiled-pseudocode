/*
 * XREFs of _lambda_4f27881777b3828299edd9a0e9cb6746_::_lambda_4f27881777b3828299edd9a0e9cb6746_ @ 0x18008ED20
 * Callers:
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______lambda_4f27881777b3828299edd9a0e9cb6746___ @ 0x18008E218 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundati.c)
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x180051A30 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18008EDCC (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0.c)
 */

__int64 __fastcall lambda_4f27881777b3828299edd9a0e9cb6746_::_lambda_4f27881777b3828299edd9a0e9cb6746_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a2 + 1;
  if ( v4 != a2 + 1 )
  {
    *v4 = *v6;
    *v6 = 0LL;
  }
  v7 = a2[2];
  a2[2] = 0LL;
  *((_BYTE *)a2 + 24) = 1;
  *(_QWORD *)(a1 + 16) = v7;
  v8 = a2[4];
  *(_BYTE *)(a1 + 24) = 0;
  a2[4] = 0LL;
  *((_BYTE *)a2 + 40) = 1;
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = v8;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
    (__int64 *)(a1 + 368),
    a2 + 46);
  return a1;
}
