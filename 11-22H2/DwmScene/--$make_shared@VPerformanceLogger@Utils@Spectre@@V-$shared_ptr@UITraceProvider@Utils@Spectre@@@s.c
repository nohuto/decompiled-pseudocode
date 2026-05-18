/*
 * XREFs of ??$make_shared@VPerformanceLogger@Utils@Spectre@@V?$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V?$shared_ptr@UITimeProvider@Utils@Spectre@@@5@V?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@5@@std@@YA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITraceProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITimeProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@0@@Z @ 0x18001FB18
 * Callers:
 *     ?CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@XZ @ 0x1800201A0 (-CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA-AV-$shared_ptr@VPerformanceLogge.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0PerformanceLogger@Utils@Spectre@@QEAA@V?$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V?$shared_ptr@UITimeProvider@Utils@Spectre@@@4@V?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@4@@Z @ 0x18001FC28 (--0PerformanceLogger@Utils@Spectre@@QEAA@V-$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V-$s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Utils::PerformanceLogger,std::shared_ptr<Spectre::Utils::ITraceProvider>,std::shared_ptr<Spectre::Utils::ITimeProvider>,std::shared_ptr<Spectre::Utils::IMemoryStatsProvider>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD v11[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = operator new(0x40uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Utils::PerformanceLogger>::`vftable';
    v12[0] = *a4;
    v12[1] = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v13[0] = *a3;
    v13[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v11[0] = *a2;
    v11[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Utils::PerformanceLogger::PerformanceLogger(v8 + 4, v11, v13, v12);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  a1[1] = v9;
  return a1;
}
