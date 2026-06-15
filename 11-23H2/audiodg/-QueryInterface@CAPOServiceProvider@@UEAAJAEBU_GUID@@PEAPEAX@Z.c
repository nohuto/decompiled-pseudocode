/*
 * XREFs of ?QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018770
 * Callers:
 *     ?QueryInterface@CAPOServiceProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030E70 (-QueryInterface@CAPOServiceProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOServiceProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030E90 (-QueryInterface@CAPOServiceProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002DAE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOServiceProvider::QueryInterface(CAPOServiceProvider *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v3; // r9
  __int64 v4; // r9
  __int64 v5; // r10
  int Interface; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( (unsigned int)IsEqualGUID(a2, &GUID_698f0107_1745_4708_95a5_d84478a62a65)
      || (unsigned int)IsEqualGUID(v3, &GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9) )
    {
      Interface = -2147467262;
      v8 = 140LL;
    }
    else
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::QueryInterface(
                    v5,
                    v4);
      if ( Interface >= 0 )
        return 0LL;
      v8 = 142LL;
    }
  }
  else
  {
    Interface = -2147467261;
    v8 = 138LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
    (const char *)(unsigned int)Interface,
    v9);
  return (unsigned int)Interface;
}
