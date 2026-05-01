/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800123F8
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18001263C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18000268C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, UINT32 *, _BYTE *, __int64); // r11
  const CHAR *process; // rax
  const CHAR *callerModule; // rax
  const char *v10; // r9
  char v11; // cl
  const CHAR *originCallerModule; // rax
  struct FEATURE_ERROR v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v15[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v16[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v17[104]; // [rsp+158h] [rbp+58h] BYREF

  memset_0(&v13, 0, sizeof(v13));
  v13.hr = *(_DWORD *)(a2 + 8);
  v13.lineNumber = *(_WORD *)(a2 + 64);
  v13.file = *(PCSTR *)(a2 + 56);
  v14[0] = 0;
  v7 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    LOBYTE(v6) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
                   0LL,
                   0LL,
                   v14,
                   64LL);
    v7 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  process = v14;
  if ( !(_BYTE)v6 )
    process = v13.process;
  v13.process = process;
  v13.module = *(PCSTR *)(a2 + 128);
  v15[0] = 0;
  v13.callerReturnAddressOffset = 0;
  if ( v7 )
  {
    LOBYTE(v6) = v7(*(_QWORD *)(a2 + 144), &v13.callerReturnAddressOffset, v15, 64LL);
    v7 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  callerModule = v15;
  if ( !(_BYTE)v6 )
    callerModule = v13.callerModule;
  v13.callerModule = callerModule;
  v10 = *(const char **)(a2 + 24);
  if ( v10 && *(_WORD *)v10 )
  {
    wil::details::StringCchPrintfA((wil::details *)v17, (char *)0x60, "%ws", v10);
    v13.message = v17;
    v7 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v13.originLineNumber = *((_WORD *)a3 + 12);
  v13.originFile = (PCSTR)*((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    v13.originModule = (PCSTR)wil::details::g_pfnGetModuleName(v6);
    v7 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v16[0] = 0;
  v13.originCallerReturnAddressOffset = 0;
  if ( v7 )
    v11 = v7(*(_QWORD *)a3, &v13.originCallerReturnAddressOffset, v16, 64LL);
  else
    v11 = 0;
  originCallerModule = v16;
  if ( !v11 )
    originCallerModule = v13.originCallerModule;
  v13.originCallerModule = originCallerModule;
  v13.originName = (PCSTR)*((_QWORD *)a3 + 2);
  if ( g_wil_details_internalRecordFeatureError )
  {
    g_wil_details_internalRecordFeatureError(0xB6B210u, &v13);
  }
  else if ( g_wil_details_apiRecordFeatureError )
  {
    g_wil_details_apiRecordFeatureError(0xB6B210u, &v13);
  }
}
