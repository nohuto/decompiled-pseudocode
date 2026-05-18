/*
 * XREFs of ??0ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x18003158C
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FA6C (--$_Try_emplace@AEB_K$$V@-$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U-$less@_K.c)
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *__fastcall Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::ProfileDataBase(
        Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)this = -8388609;
  *((_DWORD *)this + 1) = 2139095039;
  std::wstring::wstring((_QWORD *)this + 3, (__int64)&unk_180106A04);
  return this;
}
