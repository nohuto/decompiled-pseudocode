/*
 * XREFs of ?LoadModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBULoaderStats@TelemetryTraceLogger@23@AEBUAnimationStats@923@@Z @ 0x1800233E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U4@U4@U4@U4@U4@U4@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@533AEBU?$_tlgWrapperByVal@$07@@44446666664444@Z @ 0x180002274 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1_ea_180002274.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     _anonymous_namespace_::GetSuccessMessage @ 0x180022C40 (_anonymous_namespace_--GetSuccessMessage.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

__int64 __fastcall Spectre::Utils::TelemetryTraceLoggerWin::LoadModelSessionEnd(
        __int64 a1,
        __int64 a2,
        char a3,
        const wchar_t *a4,
        __int64 a5,
        int *a6,
        int *a7)
{
  struct TraceLoggingCorrelationVector **v8; // rdi
  bool v12; // dl
  __int64 v13; // rax
  struct TraceLoggingCorrelationVector *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct TraceLoggingCorrelationVector *v18; // rax
  int v20; // [rsp+D8h] [rbp-80h] BYREF
  int v21; // [rsp+DCh] [rbp-7Ch] BYREF
  int v22; // [rsp+E0h] [rbp-78h] BYREF
  int v23; // [rsp+E4h] [rbp-74h] BYREF
  int v24; // [rsp+E8h] [rbp-70h] BYREF
  int v25; // [rsp+ECh] [rbp-6Ch] BYREF
  int v26; // [rsp+F0h] [rbp-68h] BYREF
  int v27; // [rsp+F4h] [rbp-64h] BYREF
  int v28; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+100h] [rbp-58h] BYREF
  __int64 v30; // [rsp+108h] [rbp-50h] BYREF
  __int64 v31; // [rsp+110h] [rbp-48h] BYREF
  __int64 v32; // [rsp+118h] [rbp-40h] BYREF
  __int64 v33; // [rsp+120h] [rbp-38h] BYREF
  __int64 v34; // [rsp+128h] [rbp-30h] BYREF
  __int64 v35; // [rsp+130h] [rbp-28h] BYREF
  const wchar_t *v36; // [rsp+138h] [rbp-20h] BYREF
  const wchar_t *SuccessMessage; // [rsp+140h] [rbp-18h] BYREF
  __int64 v38; // [rsp+148h] [rbp-10h] BYREF
  __int64 v39; // [rsp+150h] [rbp-8h] BYREF
  const wchar_t *v40; // [rsp+158h] [rbp+0h] BYREF
  _BYTE v41[144]; // [rsp+168h] [rbp+10h] BYREF

  v8 = (struct TraceLoggingCorrelationVector **)(a1 + 112);
  TraceLoggingCorrelationVector::Increment(*(TraceLoggingCorrelationVector **)(a1 + 112), (char *)(a1 + 249));
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v36 = a4;
    v20 = a7[7];
    v21 = a7[6];
    v22 = a7[4];
    v23 = *a7;
    v29 = *((_QWORD *)a6 + 7);
    v30 = *((_QWORD *)a6 + 6);
    v31 = *((_QWORD *)a6 + 5);
    v32 = *((_QWORD *)a6 + 4);
    v33 = *((_QWORD *)a6 + 3);
    v34 = *((_QWORD *)a6 + 2);
    v24 = a6[3];
    v25 = a6[2];
    v26 = a6[1];
    v27 = *a6;
    v35 = a5;
    SuccessMessage = (const wchar_t *)anonymous_namespace_::GetSuccessMessage(a3);
    v38 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->(a2);
    v13 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->(a1 + 8);
    v14 = *v8;
    v39 = v13;
    v28 = 1;
    v40 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v41, v14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      byte_1801ABAD7,
      v16,
      v17,
      &v40,
      (__int64)&v28,
      &v39,
      &v38,
      &SuccessMessage,
      &v36,
      (__int64)&v35,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20);
  }
  v18 = TraceLoggingCorrelationVector::Set((const char *)(a1 + 120), v12);
  return std::unique_ptr<TraceLoggingCorrelationVector>::reset(v8, v18);
}
