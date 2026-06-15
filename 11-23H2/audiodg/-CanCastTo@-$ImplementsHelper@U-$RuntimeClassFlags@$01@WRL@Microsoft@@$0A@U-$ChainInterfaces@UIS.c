/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14002DA20
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002DAE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_39da5385_7953_438c_826a_96222274b3b8);
  v6 = 0;
  if ( IsEqualGUID
    || InlineIsEqualGUID(v3, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa)
    || InlineIsEqualGUID(v7, &GUID_698f0107_1745_4708_95a5_d84478a62a65) )
  {
    *v4 = v5;
  }
  else if ( InlineIsEqualGUID(v8, &GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9) )
  {
    *v9 = v10 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
