/*
 * XREFs of ?Export3DModelEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0_NPEBDH22_K33_J44IIIM2@Z @ 0x180022670
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U4@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@5533433AEBU?$_tlgWrapperByVal@$07@@6666644443@Z @ 0x180002CAC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@U2@U1@.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid@12@XZ @ 0x180021E40 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEBAPEBVImpl@TelemetryTraceUid.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::Export3DModelEnd(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        const struct Spectre::Utils::TelemetryTraceUid *a2,
        const struct Spectre::Utils::TelemetryTraceUid *a3,
        char a4,
        const char *a5,
        int a6,
        const char *a7,
        const char *a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        unsigned int a15,
        unsigned int a16,
        unsigned int a17,
        float a18,
        const char *a19)
{
  struct TraceLoggingCorrelationVector **v20; // rdi
  bool v24; // dl
  const char *v25; // rax
  __int64 v26; // rax
  struct TraceLoggingCorrelationVector *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct TraceLoggingCorrelationVector *v31; // rax
  float v32; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v33; // [rsp+DCh] [rbp-7Ch] BYREF
  unsigned int v34; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+E4h] [rbp-74h] BYREF
  int v36; // [rsp+E8h] [rbp-70h] BYREF
  int v37; // [rsp+ECh] [rbp-6Ch] BYREF
  const wchar_t *v38; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+100h] [rbp-58h] BYREF
  __int64 v41; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+110h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+118h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+120h] [rbp-38h] BYREF
  const wchar_t *v45; // [rsp+128h] [rbp-30h] BYREF
  const wchar_t *v46; // [rsp+130h] [rbp-28h] BYREF
  const wchar_t *v47; // [rsp+138h] [rbp-20h] BYREF
  const wchar_t *v48; // [rsp+140h] [rbp-18h] BYREF
  __int64 v49; // [rsp+148h] [rbp-10h] BYREF
  __int64 v50; // [rsp+150h] [rbp-8h] BYREF
  __int64 v51; // [rsp+158h] [rbp+0h] BYREF
  const wchar_t *v52; // [rsp+160h] [rbp+8h] BYREF
  _BYTE v53[144]; // [rsp+168h] [rbp+10h] BYREF

  v20 = (struct TraceLoggingCorrelationVector **)((char *)this + 112);
  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v38 = (const wchar_t *)a19;
    v32 = a18;
    v33 = a17;
    v34 = a16;
    v35 = a15;
    v39 = a14;
    v40 = a13;
    v41 = a12;
    v42 = a11;
    v43 = a10;
    v44 = a9;
    v45 = (const wchar_t *)a8;
    v46 = (const wchar_t *)a7;
    v36 = a6;
    v47 = (const wchar_t *)a5;
    v25 = "fail";
    if ( a4 )
      v25 = "success";
    v48 = (const wchar_t *)v25;
    v49 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a3);
    v50 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)a2);
    v26 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 16);
    v27 = *v20;
    v51 = v26;
    v37 = 1;
    v52 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v53, v27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v28,
      byte_1801AB0A5,
      v29,
      v30,
      &v52,
      (__int64)&v37,
      &v51,
      &v50,
      &v49,
      &v48,
      &v47,
      (__int64)&v36,
      &v46,
      &v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      &v38);
  }
  v31 = TraceLoggingCorrelationVector::Set((const char *)this + 120, v24);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(v20, v31);
}
