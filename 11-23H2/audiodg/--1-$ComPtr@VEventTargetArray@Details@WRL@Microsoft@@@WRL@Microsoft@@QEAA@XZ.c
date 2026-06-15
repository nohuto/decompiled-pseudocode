/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x140080398
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x14000518C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0024b6ff9a14fcf65a4c3da593d931bf__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x14007E29F (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0024b6ff9a14fcf65a4c3da593d931bf__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_8a2be094b6303b5728ec372d8292b9ec__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x14007E423 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_8a2be094b6303b5728ec372d8292b9ec__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d7fead59395791ab94fec2ef4162c73__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______::_1_::dtor$0 @ 0x14007E5A7 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9d7fead59395791ab94fec2ef4162c73__Win.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14007E768 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
             result,
             a2);
  }
  return result;
}
