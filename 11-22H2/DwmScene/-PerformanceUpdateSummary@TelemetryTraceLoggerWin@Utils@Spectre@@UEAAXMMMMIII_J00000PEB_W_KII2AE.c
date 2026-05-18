/*
 * XREFs of ?PerformanceUpdateSummary@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXMMMMIII_J00000PEB_W_KII2AEBUCpuProfileData@TelemetryTraceLogger@23@AEBUGpuProfileData@523@@Z @ 0x1800237B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180001528 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U4@U?$_tlgWrapSz@_W@@U4@U2@U2@U4@U1@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@54444444AEBU?$_tlgWrapperByVal@$07@@66666AEBU?$_tlgWrapSz@_W@@644634444444@Z @ 0x18000265C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@U2@U2@.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ??C?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid@12@XZ @ 0x180021E34 (--C-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAAPEAVImpl@TelemetryTraceUid.c)
 *     ?GetAverage@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEBAMXZ @ 0x180022C00 (-GetAverage@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEBAMXZ.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::PerformanceUpdateSummary(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        const wchar_t *a15,
        unsigned __int64 a16,
        unsigned int a17,
        unsigned int a18,
        unsigned __int64 a19,
        const struct Spectre::Utils::TelemetryTraceLogger::CpuProfileData *a20,
        const struct Spectre::Utils::TelemetryTraceLogger::GpuProfileData *a21)
{
  bool v21; // dl
  float Average; // xmm0_4
  __int64 v24; // r8
  int v25; // xmm2_4
  int *v26; // rcx
  struct TraceLoggingCorrelationVector *v27; // rax
  float v28; // xmm0_4
  const wchar_t *v29; // rax
  __int64 v30; // rax
  struct TraceLoggingCorrelationVector *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // [rsp+118h] [rbp-80h] BYREF
  int v36; // [rsp+11Ch] [rbp-7Ch] BYREF
  float v37; // [rsp+120h] [rbp-78h] BYREF
  int v38; // [rsp+124h] [rbp-74h] BYREF
  int v39; // [rsp+128h] [rbp-70h] BYREF
  int v40; // [rsp+12Ch] [rbp-6Ch] BYREF
  float v41; // [rsp+130h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+134h] [rbp-64h] BYREF
  unsigned int v43; // [rsp+138h] [rbp-60h] BYREF
  unsigned int v44; // [rsp+13Ch] [rbp-5Ch] BYREF
  unsigned int v45; // [rsp+140h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+144h] [rbp-54h] BYREF
  float v47; // [rsp+148h] [rbp-50h] BYREF
  float v48; // [rsp+14Ch] [rbp-4Ch] BYREF
  float v49; // [rsp+150h] [rbp-48h] BYREF
  float v50; // [rsp+154h] [rbp-44h] BYREF
  int v51; // [rsp+158h] [rbp-40h] BYREF
  const wchar_t *v52; // [rsp+160h] [rbp-38h] BYREF
  unsigned __int64 v53; // [rsp+168h] [rbp-30h] BYREF
  unsigned __int64 v54; // [rsp+170h] [rbp-28h] BYREF
  void *v55; // [rsp+178h] [rbp-20h] BYREF
  __int64 v56; // [rsp+180h] [rbp-18h] BYREF
  __int64 v57; // [rsp+188h] [rbp-10h] BYREF
  __int64 v58; // [rsp+190h] [rbp-8h] BYREF
  __int64 v59; // [rsp+198h] [rbp+0h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v62; // [rsp+1B0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+1B8h] [rbp+20h] BYREF
  const wchar_t *v64; // [rsp+1C0h] [rbp+28h] BYREF
  _BYTE v65[144]; // [rsp+1C8h] [rbp+30h] BYREF

  v37 = 0.0;
  v35 = 0;
  v36 = 0;
  if ( *((_QWORD *)a21 + 1) )
  {
    Average = Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::GetAverage((Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *)(**(_QWORD **)a21 + 40LL));
    v25 = *(_DWORD *)(v24 + 44);
    v37 = Average;
    v36 = *v26;
    v35 = v25;
  }
  v27 = TraceLoggingCorrelationVector::Set((const char *)this + 120, v21);
  std::unique_ptr<TraceLoggingCorrelationVector>::reset((char *)this + 112, v27);
  TraceLoggingCorrelationVector::Increment(*((TraceLoggingCorrelationVector **)this + 14), (char *)this + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 && tlgKeywordOn((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v38 = *((_DWORD *)a21 + 2);
    v39 = *((_DWORD *)a20 + 1);
    v40 = *(_DWORD *)a20;
    v28 = Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::GetAverage(a20);
    v29 = (const wchar_t *)((char *)this + 80);
    v41 = v28;
    if ( *((_QWORD *)this + 13) >= 0x10uLL )
      v29 = *(const wchar_t **)v29;
    v52 = v29;
    v53 = a19;
    v42 = a18;
    v43 = a17;
    v54 = a16;
    v55 = (void *)a15;
    v56 = a14;
    v57 = a13;
    v58 = a12;
    v59 = a11;
    v60 = a10;
    v61 = a9;
    v44 = a8;
    v45 = a7;
    v46 = a6;
    v47 = a5;
    v48 = a4;
    v49 = a3;
    v50 = a2;
    v62 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 24);
    v30 = Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::operator->((__int64)this + 8);
    v31 = (struct TraceLoggingCorrelationVector *)*((_QWORD *)this + 14);
    v63 = v30;
    v51 = 1;
    v64 = (const wchar_t *)_TlgCVGetter::_TlgCVGetter((_TlgCVGetter *)v65, v31);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v32,
      byte_1801AB75D,
      v33,
      v34,
      &v64,
      (__int64)&v51,
      &v63,
      &v62,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      &v55,
      (__int64)&v54,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v53,
      &v52,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v38);
  }
}
