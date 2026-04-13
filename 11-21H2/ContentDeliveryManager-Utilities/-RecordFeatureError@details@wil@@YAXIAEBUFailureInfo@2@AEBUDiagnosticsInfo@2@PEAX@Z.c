/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003FC10
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180043904 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180045EC8 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, UINT32 *, _BYTE *, __int64); // r11
  const CHAR *process; // rax
  const CHAR *callerModule; // rax
  const char *v11; // r9
  char v12; // cl
  const CHAR *originCallerModule; // rax
  struct FEATURE_ERROR v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v16[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v17[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v18[104]; // [rsp+158h] [rbp+58h] BYREF

  v6 = (unsigned int)this;
  memset_0(&v14, 0, sizeof(v14));
  v14.hr = *(_DWORD *)(a2 + 8);
  v14.lineNumber = *(_WORD *)(a2 + 64);
  v14.file = *(PCSTR *)(a2 + 56);
  v15[0] = 0;
  v8 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    LOBYTE(v7) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
                   0LL,
                   0LL,
                   v15,
                   64LL);
    v8 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  process = v15;
  if ( !(_BYTE)v7 )
    process = v14.process;
  v14.process = process;
  v14.module = *(PCSTR *)(a2 + 128);
  v16[0] = 0;
  v14.callerReturnAddressOffset = 0;
  if ( v8 )
  {
    LOBYTE(v7) = v8(*(_QWORD *)(a2 + 144), &v14.callerReturnAddressOffset, v16, 64LL);
    v8 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  callerModule = v16;
  if ( !(_BYTE)v7 )
    callerModule = v14.callerModule;
  v14.callerModule = callerModule;
  v11 = *(const char **)(a2 + 24);
  if ( v11 && *(_WORD *)v11 )
  {
    wil::details::StringCchPrintfA((wil::details *)v18, (char *)0x60, (unsigned __int64)"%ws", v11);
    v14.message = v18;
    v8 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v14.originLineNumber = *((_WORD *)a3 + 12);
  v14.originFile = (PCSTR)*((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    v14.originModule = (PCSTR)wil::details::g_pfnGetModuleName(v7);
    v8 = (__int64 (__fastcall *)(_QWORD, UINT32 *, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v17[0] = 0;
  v14.originCallerReturnAddressOffset = 0;
  if ( v8 )
    v12 = v8(*(_QWORD *)a3, &v14.originCallerReturnAddressOffset, v17, 64LL);
  else
    v12 = 0;
  originCallerModule = v17;
  if ( !v12 )
    originCallerModule = v14.originCallerModule;
  v14.originCallerModule = originCallerModule;
  v14.originName = (PCSTR)*((_QWORD *)a3 + 2);
  if ( g_wil_details_internalRecordFeatureError )
  {
    g_wil_details_internalRecordFeatureError(v6, &v14);
  }
  else if ( g_wil_details_apiRecordFeatureError )
  {
    g_wil_details_apiRecordFeatureError(v6, &v14);
  }
}
