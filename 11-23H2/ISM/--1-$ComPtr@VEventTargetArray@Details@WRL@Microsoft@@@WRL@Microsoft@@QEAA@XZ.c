/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180098B88
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180040B2C (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 *     _ForegroundManager::Create_::_1_::dtor$0 @ 0x18006EEBC (_ForegroundManager--Create_--_1_--dtor$0.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7e0f520160950e24bd7fd597c2836819__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::ServerConnectionArgs______::_1_::dtor$0 @ 0x180176D8C (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7e0f520160950e24bd7fd597c2836819__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_8e884d9800c4caace3df8d0733f3eac6__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs______::_1_::dtor$0 @ 0x180176F1C (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_8e884d9800c4caace3df8d0733f3eac6__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9bde9d5cbf3970395896a777a7cc8107__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureReadyChangedEventArgs______::_1_::dtor$0 @ 0x1801770AC (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9bde9d5cbf3970395896a777a7cc8107__Win.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1801772CC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180177390 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_2994a7a20cb592567dc6818203d49b13__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs______::_1_::dtor$0 @ 0x180181243 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_2994a7a20cb592567dc6818203d49b13__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
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
