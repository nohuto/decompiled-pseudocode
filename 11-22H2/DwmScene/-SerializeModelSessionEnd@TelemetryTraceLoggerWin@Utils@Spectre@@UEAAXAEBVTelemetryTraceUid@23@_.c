/*
 * XREFs of ?SerializeModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBUAnimationStats@TelemetryTraceLogger@23@@Z @ 0x180023C50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@533AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x1800020C8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1@U1@U-$_tlgWr.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     _anonymous_namespace_::GetSuccessMessage @ 0x180022C40 (_anonymous_namespace_--GetSuccessMessage.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

__int64 __fastcall Spectre::Utils::TelemetryTraceLoggerWin::SerializeModelSessionEnd(
        __int64 a1,
        __int64 a2,
        char a3,
        const wchar_t *a4,
        __int64 a5,
        int *a6)
{
  struct TraceLoggingCorrelationVector **v7; // rdi
  bool v11; // dl
  __int64 v12; // rax
  struct TraceLoggingCorrelationVector *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct TraceLoggingCorrelationVector *v17; // rax
  int v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+84h] [rbp-7Ch] BYREF
  int v21; // [rsp+88h] [rbp-78h] BYREF
  int v22; // [rsp+8Ch] [rbp-74h] BYREF
  int v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v25; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *SuccessMessage; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-48h] BYREF
  const wchar_t *v29; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[144]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = (struct TraceLoggingCorrelationVector **)(a1 + 112);
  TraceLoggingCorrelationVector::Increment(*(TraceLoggingCorrelationVector **)(a1 + 112), (char *)(a1 + 249));
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v25 = a4;
    v19 = a6[7];
    v20 = a6[6];
    v21 = a6[4];
    v22 = *a6;
    v24 = a5;
    SuccessMessage = (const wchar_t *)anonymous_namespace_::GetSuccessMessage(a3);
    v27 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->(a2);
    v12 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->(a1 + 8);
    v13 = *v7;
    v28 = v12;
    v23 = 1;
    v29 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v30, v13);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      byte_1801AB60D,
      v15,
      v16,
      &v29,
      (__int64)&v23,
      &v28,
      &v27,
      &SuccessMessage,
      &v25,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  v17 = TraceLoggingCorrelationVector::Set((const char *)(a1 + 120), v11);
  return std::unique_ptr<TraceLoggingCorrelationVector>::reset(v7, v17);
}
