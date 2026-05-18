/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x180008F38
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x180009120 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006670 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180008984 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180008A14 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180008B94 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180009374 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009404 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E180 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  signed int LastError; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 result; // rax
  const struct _tlgProvider_t *v8; // rax
  int v10; // edi
  const char *v11; // r9
  int v12; // edi
  int v13; // eax
  unsigned int v14; // r8d
  ULONG v15; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  InputTraceLogging::KST::DWM::ThreadStart(CurrentThreadId);
  if ( (unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    v6 = 0;
    while ( 1 )
    {
      v8 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v8 > 4u && (*((_BYTE *)v8 + 16) & 2) != 0 && (*((_QWORD *)v8 + 3) & 2LL) == *((_QWORD *)v8 + 3) )
        tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_1800113F4, 0LL, 0LL, 2u, &v16);
      v10 = NtKSTWait();
      InputTraceLogging::KST::DWM::ExitWait(v10);
      if ( !v10 )
        break;
      v12 = v10 - 1;
      if ( !v12 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          146LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v11);
      if ( v12 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          155LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v11);
      v13 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x96, v14, (const char *)(unsigned int)v13, v15);
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 16LL))(this) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x69,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v3);
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( (v6 & 0x80000000) == 0 )
      v6 = -2147467259;
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x77, v5, (const char *)v6, v15);
  }
  *((_DWORD *)this + 6) = 0;
  result = (unsigned __int16)v6;
  if ( (v6 & 0x1FFF0000) != 0x70000 )
    return v6;
  return result;
}
