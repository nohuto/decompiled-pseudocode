/*
 * XREFs of ?CanvasDestroyed@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXHPEBD@Z @ 0x180021F20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@43@Z @ 0x18000190C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U2@U1@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::CanvasDestroyed(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v6; // rax
  struct TraceLoggingCorrelationVector *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-C8h] BYREF
  int v12; // [rsp+54h] [rbp-C4h] BYREF
  const wchar_t *v13; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-B8h] BYREF
  const wchar_t *v15; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v16[144]; // [rsp+70h] [rbp-A8h] BYREF

  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
    {
      v13 = a3;
      v11 = a2;
      v6 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
      v7 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
      v14 = v6;
      v12 = 1;
      v15 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v16, v7);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v8,
        byte_1801ABD37,
        v9,
        v10,
        &v15,
        (__int64)&v12,
        &v14,
        (__int64)&v11,
        &v13);
    }
  }
}
