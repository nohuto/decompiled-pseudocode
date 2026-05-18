/*
 * XREFs of ??1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ @ 0x180021D44
 * Callers:
 *     ??_GTelemetryTraceLoggerWin@Utils@Spectre@@UEAAPEAXI@Z @ 0x180021EE0 (--_GTelemetryTraceLoggerWin@Utils@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x180021D1C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ??1TelemetryTraceUid@Utils@Spectre@@QEAA@XZ @ 0x180021DD0 (--1TelemetryTraceUid@Utils@Spectre@@QEAA@XZ.c)
 *     ??F?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180021E70 (--F-$_Atomic_integral@_K$07@std@@QEAA_KXZ.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::~TelemetryTraceLoggerWin(void **this)
{
  REGHANDLE v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *this = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( !std::_Atomic_integral<unsigned __int64,8>::operator--() )
  {
    v2 = qword_1801C81E0;
    qword_1801C81E0 = 0LL;
    dword_1801C81C0 = 0;
    EventUnregister(v2);
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(this + 14);
  std::string::_Tidy_deallocate((__int64)(this + 10));
  std::string::_Tidy_deallocate((__int64)(this + 6));
  v3 = (std::_Ref_count_base *)this[5];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Spectre::Utils::TelemetryTraceUid::~TelemetryTraceUid((Spectre::Utils::TelemetryTraceUid *)(this + 3));
  Spectre::Utils::TelemetryTraceUid::~TelemetryTraceUid((Spectre::Utils::TelemetryTraceUid *)(this + 2));
  Spectre::Utils::TelemetryTraceUid::~TelemetryTraceUid((Spectre::Utils::TelemetryTraceUid *)(this + 1));
}
