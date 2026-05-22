/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800DDF20
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800DE510 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r8

  std::_Func_class<void,>::_Tidy(a1 + 64, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)(a1 + 8),
    0LL,
    v3);
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)a1);
}
