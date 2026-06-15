/*
 * XREFs of ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140071808
 * Callers:
 *     ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x1400713B8 (--$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140073DFC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14007D980 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_9d7fead59395791ab94fec2ef4162c73_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  int v12; // eax
  int MatchingRestrictedErrorInfo; // ebx
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v15);
  v7 = v15[0];
  v8 = *(_QWORD **)(v15[0] + 32LL);
  v9 = *(_QWORD **)(v15[0] + 16LL);
  if ( v9 == *(_QWORD **)(v15[0] + 24LL) )
    goto LABEL_20;
  v10 = (_QWORD *)a1[1];
  v11 = (_QWORD *)*a1;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, *v11, *v10);
    v6 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
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
    RoTransformError(v6, 0LL, 0LL);
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v15[1] = *v8;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v16);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v6;
  v6 = v5;
  v7 = v15[0];
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  return v6;
}
