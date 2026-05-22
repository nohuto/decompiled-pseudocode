/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18015894C
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7e0f520160950e24bd7fd597c2836819__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::ServerConnectionArgs______::_1_::dtor$0 @ 0x180157B4B (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7e0f520160950e24bd7fd597c2836819__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_8e884d9800c4caace3df8d0733f3eac6__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs______::_1_::dtor$0 @ 0x180157CEF (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_8e884d9800c4caace3df8d0733f3eac6__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9bde9d5cbf3970395896a777a7cc8107__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureReadyChangedEventArgs______::_1_::dtor$0 @ 0x180157E93 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9bde9d5cbf3970395896a777a7cc8107__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_2994a7a20cb592567dc6818203d49b13__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs______::_1_::dtor$0 @ 0x180161C4A (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_2994a7a20cb592567dc6818203d49b13__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
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
