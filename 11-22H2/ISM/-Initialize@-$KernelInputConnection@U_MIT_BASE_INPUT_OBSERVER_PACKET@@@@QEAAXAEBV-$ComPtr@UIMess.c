/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x18004467C
 * Callers:
 *     ??0?$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x180035A24 (--0-$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004D3D4 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18004F160 (-_Reset_move@-$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B63B0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v8; // rbx
  _BYTE *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  const char *v11; // r9
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, const wchar_t *, _QWORD *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+20h] [rbp-99h]
  int v24; // [rsp+20h] [rbp-99h]
  _BYTE v25[56]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE *v26; // [rsp+78h] [rbp-41h]
  _BYTE v27[56]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *((_DWORD *)a1 + 34) = a3;
  v8 = a1 + 8;
  v9 = 0LL;
  v26 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v10 )
  {
    v9 = (_BYTE *)(**v10)(v10, v25);
    v26 = v9;
  }
  if ( v9 == v25 || (_QWORD *)v8[7] == v8 )
  {
    v28 = 0LL;
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v27, v25);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v25, v8);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v8, v27);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v27);
  }
  else
  {
    v26 = (_BYTE *)v8[7];
    v8[7] = v9;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v25);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v11);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v12 = *a2;
    v13 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
    v14 = v13(v12, L"Kernel\\MIT\\InputPort", a1);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v14,
        v23);
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v16,
        v23);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v17 = *a2;
    v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      a1[1]);
    v24 = (_DWORD)a1 + 16;
    v19 = v18(v17, KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v19,
        v24);
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v20,
        v24);
    v21 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v21 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v21,
        v24);
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4);
}
