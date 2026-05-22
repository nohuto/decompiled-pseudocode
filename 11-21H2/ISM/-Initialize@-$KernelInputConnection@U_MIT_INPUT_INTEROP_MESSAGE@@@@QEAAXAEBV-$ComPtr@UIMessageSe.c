/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180032C0C
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180046EEC (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x18008B310 (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008C928 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v6; // rdi
  _BYTE *v7; // r8
  __int64 (__fastcall ***v8)(_QWORD, _BYTE *, _QWORD); // rcx
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  _BYTE *v12; // rdx
  const char *v13; // r9
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, const wchar_t *, _QWORD *); // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r8
  __int64 v21; // rdi
  struct IMessageSession *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 (__fastcall *v25)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD); // r12
  wil::details *v26; // rdi
  struct IMessageSession *v27; // rdx
  wil::details *v28; // rsi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v33; // [rsp+20h] [rbp-A9h]
  int v34; // [rsp+20h] [rbp-A9h]
  _BYTE v37[56]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE *v38; // [rsp+88h] [rbp-41h]
  _BYTE v39[56]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE *v40; // [rsp+C8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  *((_DWORD *)a1 + 34) = a3;
  v6 = a1 + 8;
  v7 = 0LL;
  v38 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *, _QWORD))(a4 + 56);
  if ( v8 )
  {
    v7 = (_BYTE *)(**v8)(v8, v37, 0LL);
    v38 = v7;
  }
  if ( v7 == v37 || (_QWORD *)a1[15] == v6 )
  {
    v9 = 0LL;
    v40 = 0LL;
    if ( !v7 )
      goto LABEL_9;
    if ( v7 == v37 )
    {
      v9 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 8LL))(v7, v39);
      v40 = v9;
      if ( !v38 )
        goto LABEL_9;
      LOBYTE(v10) = v38 != v37;
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v38 + 32LL))(v38, v10);
      v9 = v40;
    }
    else
    {
      v9 = v7;
      v40 = v7;
    }
    v38 = 0LL;
LABEL_9:
    v11 = (_QWORD *)a1[15];
    if ( v11 )
    {
      if ( v11 == v6 )
      {
        v38 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*v11 + 8LL))(a1[15], v37);
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v6);
        v9 = v40;
      }
      else
      {
        v38 = (_BYTE *)a1[15];
        a1[15] = 0LL;
      }
    }
    if ( !v9 )
      goto LABEL_15;
    if ( v9 == v39 )
    {
      a1[15] = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v6);
      if ( !v40 )
      {
LABEL_15:
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v39);
        goto LABEL_16;
      }
      v12 = v39;
      LOBYTE(v12) = v40 != v39;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v40 + 32LL))(v40, v12);
    }
    else
    {
      a1[15] = v9;
    }
    v40 = 0LL;
    goto LABEL_15;
  }
  v38 = (_BYTE *)a1[15];
  a1[15] = v7;
LABEL_16:
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v37);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v13);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v14 = *a2;
    v15 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    v16 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v15(v14, L"Kernel\\MIT\\InputPort", a1);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v17,
        v33);
    LOBYTE(v18) = 1;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v19,
        v33);
    v21 = *a2;
    v22 = (struct IMessageSession *)a1[2];
    if ( v22 )
      wil::details::IMessageSessionCloseEndpointFunction((wil::details *)a1[1], v22, v20);
    a1[2] = 0LL;
    v23 = a1[1];
    if ( v23 != v21 )
    {
      a1[1] = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = *a2;
    v25 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    v26 = (wil::details *)a1[1];
    v27 = (struct IMessageSession *)a1[2];
    v28 = v26;
    if ( v27 )
    {
      wil::details::IMessageSessionCloseEndpointFunction(v26, v27, v20);
      v28 = (wil::details *)a1[1];
    }
    a1[2] = 0LL;
    if ( v28 != v26 )
    {
      a1[1] = v26;
      if ( v26 )
        (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v26 + 8LL))(v26);
      if ( v28 )
        (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v34 = (_DWORD)a1 + 16;
    v29 = v25(v24, KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v29 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v29,
        v34);
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v30 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v30,
        v34);
    v31 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v31 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v31,
        v34);
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4);
}
