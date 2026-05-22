/*
 * XREFs of ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180002560
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800024D0 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 * Callees:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180002628 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BD7CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall Win32kInterop::ProcessKeyboardInputMessage(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // [rsp+20h] [rbp-E0h]
  BOOL v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[92]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  memset_0(v16, 0, sizeof(v16));
  v16[0] = 4;
  v16[6] = 368;
  v5 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     v4,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v15 = *(_QWORD *)a2;
    v14 = (*((_WORD *)a2 + 135) & 1) == 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_18020325C,
      v6,
      v7,
      (__int64)&v14,
      (__int64)&v15);
  }
  if ( Win32kInterop::CreateKeyboardInputInfo(this, a2, (struct KeyboardInputInfo *)v16) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v12,
        v13);
  }
  else
  {
    v9 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                       v8,
                       _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v9 > 4u
      && (*(_DWORD *)(v9 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v9 + 24) & 0x200LL) == *(_QWORD *)(v9 + 24) )
    {
      v15 = *(_QWORD *)a2;
      v14 = (*((_WORD *)a2 + 135) & 1) == 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v9,
        (unsigned int)&unk_18020344C,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&v15);
    }
  }
}
