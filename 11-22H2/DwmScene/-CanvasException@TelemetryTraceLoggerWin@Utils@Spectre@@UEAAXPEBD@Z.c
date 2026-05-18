/*
 * XREFs of ?CanvasException@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXPEBD@Z @ 0x180022020
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53@Z @ 0x180001B44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::CanvasException(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const wchar_t *a2)
{
  __int64 v4; // rax
  struct TraceLoggingCorrelationVector *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp-D8h] BYREF
  const wchar_t *v10; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-C0h] BYREF
  const wchar_t *v13; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+80h] [rbp-A8h] BYREF

  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
    {
      v10 = a2;
      v11 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 24);
      v4 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
      v5 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
      v12 = v4;
      v9 = 1;
      v13 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v14, v5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>>(
        v6,
        byte_1801AB6E4,
        v7,
        v8,
        &v13,
        (__int64)&v9,
        &v12,
        &v11,
        &v10);
    }
  }
}
