/*
 * XREFs of ?TranscoderInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD11@Z @ 0x180024370
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@33333@Z @ 0x180001768 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@U1@@-$.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::TranscoderInitialization(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        const char *a5)
{
  const wchar_t *v8; // r9
  const wchar_t *v9; // rax
  bool v10; // cf
  __int64 v11; // rax
  struct TraceLoggingCorrelationVector *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v17; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v19; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v20; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v23; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[144]; // [rsp+A0h] [rbp-60h] BYREF

  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v17 = (const wchar_t *)a5;
    v9 = (const wchar_t *)((char *)this + 48);
    v10 = *((_QWORD *)this + 9) < 0x10uLL;
    v18 = a4;
    if ( !v10 )
      v9 = *(const wchar_t **)v9;
    v19 = v9;
    v20 = a3;
    v21 = v8;
    v11 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 16);
    v12 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
    v22 = v11;
    v16 = 1;
    v23 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v24, v12);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v13,
      byte_1801AB369,
      v14,
      v15,
      &v23,
      (__int64)&v16,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18,
      &v17);
  }
}
