/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800DFF30
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008C928 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800DE844 (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize(
        _QWORD *a1,
        wil::details **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  wil::details *v9; // rdi
  __int64 (__fastcall *v10)(wil::details *, const wchar_t *, _QWORD *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r8
  wil::details *v15; // rsi
  __int64 (__fastcall *v16)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [rsp+20h] [rbp-28h]
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)a1 + 34) = 14;
  std::function<void (_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const *)>::operator=((__int64)(a1 + 8), a4);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v8);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
    v11 = v10(v9, L"Kernel\\MIT\\InputPort", a1);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v11,
        v22);
    LOBYTE(v12) = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v13,
        v22);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      *a2,
      v14);
    v15 = *a2;
    v16 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      (wil::details *)a1[1],
      v17);
    v23 = (_DWORD)a1 + 16;
    v18 = v16(v15, KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v18,
        v23);
    v19 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v19,
        v23);
    v20 = NtMITCoreMsgKOpenConnectionTo(14LL, a1 + 3);
    if ( v20 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v20,
        v23);
  }
  return std::_Func_class<void,>::_Tidy(a4, v7);
}
