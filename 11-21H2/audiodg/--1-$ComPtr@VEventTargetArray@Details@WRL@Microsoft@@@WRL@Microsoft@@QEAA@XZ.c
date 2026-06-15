/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x140073744
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0024b6ff9a14fcf65a4c3da593d931bf__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x140071666 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0024b6ff9a14fcf65a4c3da593d931bf__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_8a2be094b6303b5728ec372d8292b9ec__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x1400717F6 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_8a2be094b6303b5728ec372d8292b9ec__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d7fead59395791ab94fec2ef4162c73__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______::_1_::dtor$0 @ 0x140071986 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9d7fead59395791ab94fec2ef4162c73__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
