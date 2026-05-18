/*
 * XREFs of ?LoadModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x1800232B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53@Z @ 0x180001B44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::LoadModelSessionAbort(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const struct Spectre::Utils::TelemetryTraceUid *a2,
        const wchar_t *a3)
{
  struct TraceLoggingCorrelationVector **v4; // rdi
  bool v7; // dl
  __int64 v8; // rax
  struct TraceLoggingCorrelationVector *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct TraceLoggingCorrelationVector *v13; // rax
  int v14; // [rsp+50h] [rbp-D8h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-C0h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-A8h] BYREF

  v4 = (struct TraceLoggingCorrelationVector **)((char *)this + 112);
  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v15 = a3;
    v16 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a2);
    v8 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
    v9 = *v4;
    v17 = v8;
    v14 = 1;
    v18 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v19, v9);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>>(
      v10,
      byte_1801AB968,
      v11,
      v12,
      &v18,
      (__int64)&v14,
      &v17,
      &v16,
      &v15);
  }
  v13 = TraceLoggingCorrelationVector::Set((const char *)this + 120, v7);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v4, v13);
}
