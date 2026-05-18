/*
 * XREFs of ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8
 * Callers:
 *     ?CreateTelemetryTraceLogger@Utils@Spectre@@YA?AV?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@std@@XZ @ 0x1800210A4 (-CreateTelemetryTraceLogger@Utils@Spectre@@YA-AV-$shared_ptr@VITelemetryTraceLogger@Utils@Spectr.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800013E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@XZ @ 0x180021910 (--$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA-AV-$unique_ptr@VTraceLoggingCorre.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x180021D1C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ??E?$_Atomic_integral@_K$07@std@@QEAA_KH@Z @ 0x180021E4C (--E-$_Atomic_integral@_K$07@std@@QEAA_KH@Z.c)
 *     ?CreateUid@TelemetryTraceUid@Utils@Spectre@@SA?AV123@XZ @ 0x180022454 (-CreateUid@TelemetryTraceUid@Utils@Spectre@@SA-AV123@XZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800241A0 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

// Hidden C++ exception states: #wind=7
Spectre::Utils::TelemetryTraceLoggerWin *__fastcall Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin(
        Spectre::Utils::TelemetryTraceLoggerWin *this)
{
  char *v2; // rbp
  TraceLoggingCorrelationVector **v3; // rdi
  size_t v4; // r8
  const char *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  std::_Ref_count_base *v10; // rax
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  v2 = (char *)this + 8;
  Spectre::Utils::TelemetryTraceUid::CreateUid((char *)this + 8);
  Spectre::Utils::TelemetryTraceUid::CreateUid((char *)this + 16);
  Spectre::Utils::TelemetryTraceUid::CreateUid((char *)this + 24);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 15LL;
  *((_BYTE *)this + 48) = 0;
  std::string::string((_QWORD *)this + 10, (__int64)"CanvasDefault");
  v3 = (TraceLoggingCorrelationVector **)((char *)this + 112);
  *((_QWORD *)this + 14) = 0LL;
  GetSystemInfo(&SystemInfo);
  v4 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v5 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v5 = "UNKNOWN";
        v4 = 7LL;
        goto LABEL_9;
      }
      v5 = "x64";
    }
    v4 = 3LL;
  }
  else
  {
    v5 = "WIN32";
  }
LABEL_9:
  std::string::assign((void **)this + 6, v5, v4);
  v6 = std::make_unique<TraceLoggingCorrelationVector,,0>(&v13);
  if ( v3 != (TraceLoggingCorrelationVector **)v6 )
  {
    v7 = *v6;
    *v6 = 0LL;
    std::unique_ptr<TraceLoggingCorrelationVector>::reset((char *)this + 112, v7);
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v13);
  TraceLoggingCorrelationVector::ToStringImpl(
    *v3,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*v3 + 18, 0LL),
    (char *)this + 120);
  if ( !std::_Atomic_integral<unsigned __int64,8>::operator++(&unk_1801D33C8) )
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1801C81C0);
  v8 = operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    *((_QWORD *)v8 + 2) = v2;
    *((_QWORD *)v8 + 3) = (char *)this + 16;
    *((_QWORD *)v8 + 4) = (char *)this + 48;
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 4) = v9 + 4;
  v10 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v9;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return this;
}
