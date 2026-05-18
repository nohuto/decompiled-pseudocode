/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x18000F2F0
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x18000F4E0 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005764 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009A20 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18000ED44 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000EF4C (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18000F714 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F7A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  signed int LastError; // eax
  unsigned int v5; // r8d
  signed int v6; // ebx
  unsigned int v7; // esi
  __int64 result; // rax
  const struct _tlgProvider_t *v9; // rax
  int v11; // edi
  const char *v12; // r9
  int v13; // edi
  int v14; // eax
  unsigned int v15; // r8d
  ULONG v16; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  InputTraceLogging::KST::DWM::ThreadStart(CurrentThreadId);
  if ( (unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    while ( 1 )
    {
      v9 = InputTraceLogging::Provider();
      v6 = 0;
      v7 = 0;
      if ( *(_DWORD *)v9 > 4u && (*((_BYTE *)v9 + 16) & 2) != 0 && (*((_QWORD *)v9 + 3) & 2LL) == *((_QWORD *)v9 + 3) )
        tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_18001268C, 0LL, 0LL, 2u, &v17);
      v11 = NtKSTWait();
      InputTraceLogging::KST::DWM::ExitWait(v11);
      if ( !v11 )
        break;
      v13 = v11 - 1;
      if ( !v13 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          146LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v12);
      if ( v13 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          155LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v12);
      v14 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x96, v15, (const char *)(unsigned int)v14, v16);
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
    if ( v6 >= 0 )
      v6 = -2147467259;
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x77, v5, (const char *)(unsigned int)v6, v16);
    v7 = v6;
  }
  *((_DWORD *)this + 6) = 0;
  result = (unsigned __int16)v7;
  if ( (v6 & 0x1FFF0000) != 0x70000 )
    return v7;
  return result;
}
