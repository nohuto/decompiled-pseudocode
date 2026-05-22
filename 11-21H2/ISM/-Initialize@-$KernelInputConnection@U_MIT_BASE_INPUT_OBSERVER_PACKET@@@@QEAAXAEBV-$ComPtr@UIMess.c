/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x180043560
 * Callers:
 *     ??0?$CBaseInputObserverServer@$0M@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x180043434 (--0-$CBaseInputObserverServer@$0M@@@IEAA@W4InputObserverType@InputObservation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800467F0 (-_Reset_move@-$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180046EEC (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008C928 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
        _QWORD *a1,
        wil::details **a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v8; // rbx
  _BYTE *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  const char *v11; // r9
  wil::details *v12; // rdi
  __int64 (__fastcall *v13)(wil::details *, const wchar_t *, _QWORD *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r8
  wil::details *v18; // rsi
  __int64 (__fastcall *v19)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v25; // [rsp+20h] [rbp-99h]
  int v26; // [rsp+20h] [rbp-99h]
  _BYTE v27[56]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE *v28; // [rsp+78h] [rbp-41h]
  _BYTE v29[56]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *((_DWORD *)a1 + 34) = a3;
  v8 = a1 + 8;
  v9 = 0LL;
  v28 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v10 )
  {
    v9 = (_BYTE *)(**v10)(v10, v27);
    v28 = v9;
  }
  if ( v9 == v27 || (_QWORD *)v8[7] == v8 )
  {
    v30 = 0LL;
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v29, v27);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v27, v8);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v8, v29);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v29);
  }
  else
  {
    v28 = (_BYTE *)v8[7];
    v8[7] = v9;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v27);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v11);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v12 = *a2;
    v13 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
    v14 = v13(v12, L"Kernel\\MIT\\InputPort", a1);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v14,
        v25);
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v16,
        v25);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      *a2,
      v17);
    v18 = *a2;
    v19 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      (wil::details *)a1[1],
      v20);
    v26 = (_DWORD)a1 + 16;
    v21 = v19(v18, KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v21 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v21,
        v26);
    v22 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v22 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v22,
        v26);
    v23 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v23 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v23,
        v26);
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4);
}
