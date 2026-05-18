/*
 * XREFs of ?GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@234@_KAEAUResult@GpuProfilerFrame@34@@Z @ 0x1800A128C
 * Callers:
 *     ?GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@123@_KAEAUResult@GpuProfilerFrame@23@@Z @ 0x1800A13A4 (-GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@123@_KAEAUResult@GpuProf.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::GpuProfiler::FramesData::GetResultForFrame(
        Spectre::Engine::Mutex *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // r8
  unsigned __int64 *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  Spectre::Engine::Mutex::lock(a1);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame(a1, v13, a2);
  if ( !v13[0] )
  {
    v10 = (unsigned __int64 *)((char *)a1 + 144);
    v11 = (unsigned __int64 *)((char *)a1 + 144);
    if ( (char *)a1 + 144 != (char *)a1 + 184 )
    {
      while ( ++v10 != (unsigned __int64 *)((char *)a1 + 184) )
      {
        v12 = v10;
        if ( *v10 >= *v11 )
          v12 = v11;
        v11 = v12;
      }
    }
    if ( a2 < *v11 )
    {
      Spectre::Engine::Mutex::unlock(a1);
      return 2LL;
    }
    goto LABEL_18;
  }
  v6 = Spectre::Engine::GpuProfilerFrame::GetResult(*((_QWORD *)a1 + 2 * v14 + 8), a3, 0LL);
  if ( !v6 )
  {
LABEL_18:
    Spectre::Engine::Mutex::unlock(a1);
    return 3LL;
  }
  v7 = v6 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      Spectre::Engine::Mutex::unlock(a1);
      return 0LL;
    }
    else
    {
      Spectre::Engine::Mutex::unlock(a1);
      return 4LL;
    }
  }
  else
  {
    Spectre::Engine::Mutex::unlock(a1);
    return 1LL;
  }
}
