/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x18002A904
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x18002CA00 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180178EA4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  DWORD CurrentThreadId; // eax
  DWORD v3; // ebx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  DWORD v8; // ebx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  const char *v11; // r9
  DWORD v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const char *v16; // r9
  signed int LastError; // eax
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG v21; // [rsp+20h] [rbp-50h]
  DWORD v22; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+38h] [rbp-38h] BYREF
  DWORD *v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  v3 = CurrentThreadId;
  v5 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      v4,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 4u && (unsigned __int8)tlgKeywordOn(v5, 2LL) )
  {
    v26 = 0;
    v24 = &v22;
    v22 = v3;
    v25 = 4;
    tlgWriteTransfer_EventWriteTransfer(v15, (unsigned __int8 *)dword_18037388C, 0LL, 0LL, 3u, &v23);
  }
  if ( (unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    while ( 1 )
    {
      v7 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                          v6,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v7 > 4u && (unsigned __int8)tlgKeywordOn(v7, 2LL) )
        tlgWriteTransfer_EventWriteTransfer(v19, (unsigned __int8 *)dword_180373905, 0LL, 0LL, 2u, &v23);
      v8 = NtKSTWait();
      v10 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                           v9,
                           _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v10 > 4u && (unsigned __int8)tlgKeywordOn(v10, 2LL) )
      {
        v26 = 0;
        v24 = &v22;
        v22 = v8;
        v25 = 4;
        tlgWriteTransfer_EventWriteTransfer(v20, (unsigned __int8 *)dword_1803738DB, 0LL, 0LL, 3u, &v23);
      }
      if ( !v8 )
        break;
      v12 = v8 - 1;
      if ( !v12 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x92,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v11);
      if ( v12 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x9B,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v11);
      v13 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x96,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          (const char *)(unsigned int)v13,
          v21);
    }
    v14 = 0;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 16LL))(this) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x69,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v16);
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    if ( (v14 & 0x80000000) == 0 )
      v14 = -2147467259;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)v14,
      v21);
  }
  *((_DWORD *)this + 6) = 0;
  result = (unsigned __int16)v14;
  if ( (v14 & 0x1FFF0000) != 0x70000 )
    return v14;
  return result;
}
