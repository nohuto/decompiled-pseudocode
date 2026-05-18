/*
 * XREFs of ?TranscoderDestroyed@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXHPEBD0@Z @ 0x180024250
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@433@Z @ 0x180001A08 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U2@U1@U1@@-$_tlgWr.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::TranscoderDestroyed(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        int a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  __int64 v8; // rax
  struct TraceLoggingCorrelationVector *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
    {
      v15 = a4;
      v16 = a3;
      v13 = a2;
      v8 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 16);
      v9 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
      v17 = v8;
      v14 = 1;
      v18 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v19, v9);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v10,
        byte_1801AB2D9,
        v11,
        v12,
        &v18,
        (__int64)&v14,
        &v17,
        (__int64)&v13,
        &v16,
        &v15);
    }
  }
}
