/*
 * XREFs of ?CanvasInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD1@Z @ 0x180022120
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3333@Z @ 0x1800015F0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@@-$_tl.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::CanvasInitialization(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  const wchar_t *v7; // r9
  const wchar_t *v8; // rax
  __int64 v9; // rax
  struct TraceLoggingCorrelationVector *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v15; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v16; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v17; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v20; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v21[144]; // [rsp+A0h] [rbp-60h] BYREF

  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v8 = (const wchar_t *)((char *)this + 48);
    v15 = a4;
    if ( *((_QWORD *)this + 9) >= 0x10uLL )
      v8 = *(const wchar_t **)v8;
    v16 = v8;
    v17 = a3;
    v18 = v7;
    v9 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
    v10 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
    v19 = v9;
    v14 = 1;
    v20 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v21, v10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v11,
      byte_1801ABC2E,
      v12,
      v13,
      &v20,
      (__int64)&v14,
      &v19,
      &v18,
      &v17,
      &v16,
      &v15);
  }
}
