/*
 * XREFs of ?Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11@Z @ 0x180022910
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@55333@Z @ 0x180002B28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@U1@@-$.c)
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

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::Export3DModelStart(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const struct Spectre::Utils::TelemetryTraceUid *a2,
        const struct Spectre::Utils::TelemetryTraceUid *a3,
        const wchar_t *a4,
        const char *a5,
        const char *a6)
{
  char *v6; // rbx
  TraceLoggingCorrelationVector **v8; // rdi
  struct TraceLoggingCorrelationVector *v12; // rax
  bool v13; // dl
  struct TraceLoggingCorrelationVector *v14; // rax
  __int64 v15; // rax
  struct TraceLoggingCorrelationVector *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v22; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v27; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = (char *)this + 120;
  v8 = (TraceLoggingCorrelationVector **)((char *)this + 112);
  v12 = TraceLoggingCorrelationVector::Set((const char *)this + 120, (bool)a2);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v8, v12);
  TraceLoggingCorrelationVector::Increment(*v8, v6);
  v14 = TraceLoggingCorrelationVector::Extend(v6, v13);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v8, v14);
  TraceLoggingCorrelationVector::ToStringImpl(
    *v8,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*v8 + 18, 0LL),
    (char *)this + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
    {
      v21 = (const wchar_t *)a6;
      v22 = (const wchar_t *)a5;
      v23 = a4;
      v24 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a3);
      v25 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a2);
      v15 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 16);
      v16 = *v8;
      v26 = v15;
      v20 = 1;
      v27 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v28, v16);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v17,
        byte_1801AAE50,
        v18,
        v19,
        &v27,
        (__int64)&v20,
        &v26,
        &v25,
        &v24,
        &v23,
        &v22,
        &v21);
    }
  }
}
