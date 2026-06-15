/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140011EF8
 * Callers:
 *     ?QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018870 (-QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x140018AC0 (-QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140067860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_140067860.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IServiceProvider,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa)
      || (unsigned int)InlineIsEqualGUID(v6, &GUID_698f0107_1745_4708_95a5_d84478a62a65) )
    {
      *v7 = v8;
      v9 = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9) )
      {
        v8 = v13 + 8;
        *v12 = v8;
        v9 = 0;
      }
      else
      {
        v9 = -2147467262;
        v8 = 0LL;
      }
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
