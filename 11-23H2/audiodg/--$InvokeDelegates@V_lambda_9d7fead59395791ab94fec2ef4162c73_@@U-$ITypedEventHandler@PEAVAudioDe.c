/*
 * XREFs of ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14007E438
 * Callers:
 *     ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x14007DFF8 (--$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140080F3C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14008AD20 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_9d7fead59395791ab94fec2ef4162c73_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int MatchingRestrictedErrorInfo; // eax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v16);
  v7 = v16[0];
  v8 = *(_QWORD **)(v16[0] + 32LL);
  v9 = *(_QWORD **)(v16[0] + 16LL);
  if ( v9 == *(_QWORD **)(v16[0] + 24LL) )
    goto LABEL_20;
  v10 = (_QWORD *)a1[1];
  v11 = (_QWORD *)*a1;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, *v11, *v10);
    v5 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v9);
      goto LABEL_12;
    }
    if ( v12 < 0 )
      break;
LABEL_13:
    ++v8;
    if ( ++v9 == *(_QWORD **)(v7 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v13 = v5;
  v16[1] = *v8;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v17);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v17);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v17);
  v5 = 0;
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v17);
  v7 = v16[0];
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7, v6);
  return v5;
}
