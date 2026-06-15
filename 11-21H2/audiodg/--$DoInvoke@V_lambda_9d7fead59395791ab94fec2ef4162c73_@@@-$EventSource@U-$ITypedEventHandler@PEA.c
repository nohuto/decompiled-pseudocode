/*
 * XREFs of ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x1400713B8
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14007BA10 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140071808 (--$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140073DB8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9d7fead59395791ab94fec2ef4162c73_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_9d7fead59395791ab94fec2ef4162c73_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>(
           &v8,
           v9,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v4;
}
