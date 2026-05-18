/*
 * XREFs of ?GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA?AUMarkerResult@234@N@Z @ 0x1800A36E4
 * Callers:
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ @ 0x1800A2CE8 (-CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::GetResult(__int64 a1, __int64 a2, double a3)
{
  Spectre::Utils::SharedMutex *v5; // rbx
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax

  v5 = (Spectre::Utils::SharedMutex *)(a1 + 8);
  Spectre::Engine::Mutex::lock((Spectre::Engine::Mutex *)(a1 + 8));
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckResult((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 208) & 1LL | ((unsigned __int64)v6 >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 392) & 1LL | ((unsigned __int64)v9 >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  *(double *)(a2 + 16) = v10 / a3 * 1000.0;
  Spectre::Engine::Mutex::unlock(v5);
  return a2;
}
