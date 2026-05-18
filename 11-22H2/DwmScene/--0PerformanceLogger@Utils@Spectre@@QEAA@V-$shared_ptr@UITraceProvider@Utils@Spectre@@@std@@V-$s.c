/*
 * XREFs of ??0PerformanceLogger@Utils@Spectre@@QEAA@V?$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V?$shared_ptr@UITimeProvider@Utils@Spectre@@@4@V?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@4@@Z @ 0x18001FC28
 * Callers:
 *     ??$make_shared@VPerformanceLogger@Utils@Spectre@@V?$shared_ptr@UITraceProvider@Utils@Spectre@@@std@@V?$shared_ptr@UITimeProvider@Utils@Spectre@@@5@V?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@5@@std@@YA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITraceProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UITimeProvider@Utils@Spectre@@@0@$$QEAV?$shared_ptr@UIMemoryStatsProvider@Utils@Spectre@@@0@@Z @ 0x18001FB18 (--$make_shared@VPerformanceLogger@Utils@Spectre@@V-$shared_ptr@UITraceProvider@Utils@Spectre@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Spectre::Utils::PerformanceLogger::PerformanceLogger(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = 0LL;
  a1[3] = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  a1[2] = *a3;
  a1[3] = a3[1];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v10 = a4[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  a1[4] = *a4;
  a1[5] = a4[1];
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v11 = (std::_Ref_count_base *)a2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)a4[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return a1;
}
