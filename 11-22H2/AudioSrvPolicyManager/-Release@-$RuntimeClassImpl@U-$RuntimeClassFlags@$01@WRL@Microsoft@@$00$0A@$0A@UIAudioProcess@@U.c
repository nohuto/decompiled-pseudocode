/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A130
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180002940 (PbmSetSmtcSubscriptionState.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18001583C (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002647C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180028F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180028F70.c)
 *     ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x18002C6F8 (--1-$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C748 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EF7C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmGetSoundLevel @ 0x1800315F0 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180031700 (PbmIsPlaying.c)
 *     PbmRegisterAppClosureNotification @ 0x180031970 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterAppManagerNotification @ 0x1800319E0 (PbmRegisterAppManagerNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180031A50 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180031E20 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180031ED0 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180031F40 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 5) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 5, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 560LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
