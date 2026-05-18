/*
 * XREFs of ?Export3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD1@Z @ 0x180022510
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@5533@Z @ 0x1800029D4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@@-$_tl.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::Export3DModelAbort(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const struct Spectre::Utils::TelemetryTraceUid *a2,
        const struct Spectre::Utils::TelemetryTraceUid *a3,
        const wchar_t *a4,
        const char *a5)
{
  struct TraceLoggingCorrelationVector **v6; // rdi
  bool v10; // dl
  __int64 v11; // rax
  struct TraceLoggingCorrelationVector *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct TraceLoggingCorrelationVector *v16; // rax
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-98h] BYREF
  const wchar_t *v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v23; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v24[144]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = (struct TraceLoggingCorrelationVector **)((char *)this + 112);
  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v18 = (const wchar_t *)a5;
    v19 = a4;
    v20 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a3);
    v21 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a2);
    v11 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 16);
    v12 = *v6;
    v22 = v11;
    LODWORD(v17) = 1;
    v23 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v24, v12);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v13,
      byte_1801AB232,
      v14,
      v15,
      &v23,
      (__int64)&v17,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18);
  }
  v16 = TraceLoggingCorrelationVector::Set((const char *)this + 120, v10);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v6, v16);
}
