/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@QEAA@XZ @ 0x18002D564
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::_Ref_count_obj2<Spectre::Engine::CpuProfiler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x128uLL);
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)(a1 + 16));
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  `eh vector constructor iterator'((char *)(a1 + 72), 24LL, 10LL, std::vector<float>::vector<float>);
  return a1;
}
