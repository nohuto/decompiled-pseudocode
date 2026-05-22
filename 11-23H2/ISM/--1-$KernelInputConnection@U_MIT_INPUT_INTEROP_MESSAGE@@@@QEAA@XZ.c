/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ @ 0x1800F7C34
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F82B8 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004CC48 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x18004E9AC (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::~KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r8

  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(a1 + 64, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)(a1 + 8),
    0LL,
    v3);
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)a1);
}
