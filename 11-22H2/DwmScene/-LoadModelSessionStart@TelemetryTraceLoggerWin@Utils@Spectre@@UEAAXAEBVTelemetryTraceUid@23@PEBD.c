/*
 * XREFs of ?LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023650
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53@Z @ 0x180001B44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180022AA8 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800241A0 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::LoadModelSessionStart(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const struct Spectre::Utils::TelemetryTraceUid *a2,
        const wchar_t *a3)
{
  char *v3; // rbx
  TraceLoggingCorrelationVector **v5; // rdi
  struct TraceLoggingCorrelationVector *v8; // rax
  __int64 v9; // rdx
  struct TraceLoggingCorrelationVector *v10; // rax
  __int64 v11; // rax
  struct TraceLoggingCorrelationVector *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+50h] [rbp-E8h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-D0h] BYREF
  const wchar_t *v20; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = (char *)this + 120;
  v5 = (TraceLoggingCorrelationVector **)((char *)this + 112);
  v8 = TraceLoggingCorrelationVector::Set((const char *)this + 120, (bool)a2);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v5, v8);
  TraceLoggingCorrelationVector::Increment(*v5, v3);
  v10 = TraceLoggingCorrelationVector::Extend(v3, v9);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v5, v10);
  TraceLoggingCorrelationVector::ToStringImpl(
    *v5,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*v5 + 18, 0LL),
    (char *)this + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
    {
      v17 = a3;
      v18 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a2);
      v11 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
      v12 = *v5;
      v19 = v11;
      v16 = 1;
      v20 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v21, v12);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>>(
        v13,
        byte_1801AB9E2,
        v14,
        v15,
        &v20,
        (__int64)&v16,
        &v19,
        &v18,
        &v17);
    }
  }
}
