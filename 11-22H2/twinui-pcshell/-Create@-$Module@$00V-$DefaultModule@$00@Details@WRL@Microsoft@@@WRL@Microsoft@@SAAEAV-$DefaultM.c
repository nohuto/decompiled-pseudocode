/*
 * XREFs of ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017DC90
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x1800029E0 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800855F0 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800B547C (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 *     DllCanUnloadNow @ 0x18018DC80 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x180194DE0 (DllGetClassObject.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1804FE9C0 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x1804FEAD0 (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_;
  byte_18098D758 = 1;
  return result;
}
