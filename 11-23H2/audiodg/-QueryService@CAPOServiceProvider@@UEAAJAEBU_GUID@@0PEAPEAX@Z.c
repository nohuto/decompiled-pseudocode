/*
 * XREFs of ?QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x140018AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002DAE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOServiceProvider::QueryService(
        CAPOServiceProvider *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  const struct _GUID *v4; // r8
  const struct _GUID *v5; // r10
  const struct _GUID *v6; // r10
  __int64 v7; // r10
  __int64 v8; // r11
  int Interface; // ebx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    Interface = -2147467261;
    v11 = 21LL;
    goto LABEL_16;
  }
  *a4 = 0LL;
  if ( (unsigned int)IsEqualGUID(a2, (const struct _GUID *)&SID_AudioProcessingObjectLoggingService) )
  {
    if ( (unsigned int)IsEqualGUID(v5, &GUID_698f0107_1745_4708_95a5_d84478a62a65) )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::QueryInterface(
                    v13,
                    v12);
      if ( Interface >= 0 )
        return 0LL;
      v11 = 28LL;
      goto LABEL_16;
    }
    v11 = 27LL;
LABEL_15:
    Interface = -2147418113;
    goto LABEL_16;
  }
  if ( !(unsigned int)IsEqualGUID(v4, (const struct _GUID *)&SID_AudioProcessingObjectRTQueue) )
  {
    v11 = 37LL;
    goto LABEL_15;
  }
  if ( !(unsigned int)IsEqualGUID(v6, &GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9) )
  {
    v11 = 32LL;
    goto LABEL_15;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::QueryInterface(
                v8,
                v7);
  if ( Interface >= 0 )
    return 0LL;
  v11 = 33LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
    (const char *)(unsigned int)Interface,
    v14);
  return (unsigned int)Interface;
}
