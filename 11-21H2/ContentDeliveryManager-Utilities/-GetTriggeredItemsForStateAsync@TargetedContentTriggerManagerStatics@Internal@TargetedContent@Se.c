/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18009E280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004D400 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionS.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800506C0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_4f27881777b3828299edd9a0e9cb6746___ @ 0x180099A44 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18009A464 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0.c)
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_ @ 0x18009AEEC (_lambda_4f27881777b3828299edd9a0e9cb6746_--__lambda_4f27881777b3828299edd9a0e9cb6746_.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009AF74 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C494 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009D204 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x1800A1A64 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        _QWORD *a5)
{
  __int64 v8; // rsi
  const wchar_t *StringRawBuffer; // rdi
  const wchar_t *v10; // rbx
  HRESULT v11; // eax
  int v12; // edi
  HSTRING v13; // rsi
  HRESULT v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  _BYTE v21[12]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  HSTRING newString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  char v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  char v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[4]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  int *v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h] BYREF
  char v35; // [rsp+ACh] [rbp-54h]
  int v36; // [rsp+D0h] [rbp-30h] BYREF
  const char *v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  char v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  char v41[152]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v42; // [rsp+190h] [rbp+90h]
  __int128 v43; // [rsp+198h] [rbp+98h]
  __int64 v44; // [rsp+1A8h] [rbp+A8h]
  _QWORD v45[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v46; // [rsp+1C8h] [rbp+C8h]
  __int64 v47; // [rsp+1D0h] [rbp+D0h]
  char v48; // [rsp+1D8h] [rbp+D8h]
  void **v49; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v50; // [rsp+320h] [rbp+220h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  *a5 = 0LL;
  Windows::Services::TargetedContent::Internal::GetCorrelationVector(&v22, a4);
  v8 = v22;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  v30[1] = 0LL;
  v30[2] = v30;
  v30[3] = 0LL;
  v31 = 0;
  v32 = &v36;
  v33 = &v34;
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v36 = 0;
  v37 = "TriggerManagerGetTriggeredItemsForStateActivity";
  v38 = 0LL;
  v40 = 1LL;
  v42 = 0LL;
  memset_0(v41, 0, sizeof(v41));
  v43 = 0LL;
  v44 = 0LL;
  v30[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v30,
    v10,
    StringRawBuffer,
    (const char *)(v8 + 8));
  v26 = 0LL;
  v27 = 0;
  v11 = WindowsDuplicateString(a2, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v13 = newString;
    WindowsDeleteString(0LL);
    v28 = 0LL;
    v29 = 0;
    v14 = WindowsDuplicateString(a3, (HSTRING *)v21);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v14);
      if ( v13 )
        WindowsDeleteString(v13);
    }
    else
    {
      v15 = *(_QWORD *)v21;
      WindowsDeleteString(0LL);
      v16 = a1 - 40;
      v25 = a1 - 40;
      if ( a1 != 40 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(a1 - 40);
      v45[0] = a1 - 40;
      v45[1] = a1 - 40;
      if ( a1 != 40 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(a1 - 40);
      v45[2] = v13;
      v26 = 0LL;
      v46 = 0;
      v27 = 1;
      v47 = v15;
      v28 = 0LL;
      v48 = 0;
      v29 = 1;
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v49,
        v30);
      v49 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
      v50 = 0LL;
      v17 = v23;
      v18 = v22;
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        v16 = v25;
      }
      std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v50, v18, v17);
      *(_DWORD *)v21 = 3;
      *(_QWORD *)&v21[4] = 130LL;
      v12 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_4f27881777b3828299edd9a0e9cb6746___(
              (__int64)v21,
              a5,
              v19,
              (__int64)v45);
      lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_(v45);
      if ( v12 >= 0 )
      {
        if ( v16 )
          Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v16);
        v12 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
        if ( v16 )
          Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v16);
      }
    }
  }
  v30[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v30);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v22);
  return (unsigned int)v12;
}
