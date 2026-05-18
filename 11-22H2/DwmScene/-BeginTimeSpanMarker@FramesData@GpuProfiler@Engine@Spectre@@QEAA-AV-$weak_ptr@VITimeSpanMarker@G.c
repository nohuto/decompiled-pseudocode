/*
 * XREFs of ?BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A0F9C
 * Callers:
 *     ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC (-BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@GpuProfilerF.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A2B30 (-BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall Spectre::Engine::GpuProfiler::FramesData::BeginTimeSpanMarker(
        Spectre::Engine::Mutex *this,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rcx
  _BYTE v17[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v20[5]; // [rsp+58h] [rbp-40h] BYREF

  Spectre::Engine::Mutex::lock(this);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame(this, v17, a3);
  if ( v17[0] )
  {
    v9 = (__int64 *)((char *)this + 16 * v18 + 64);
    v10 = *v9;
    v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v19,
            a5);
    v12 = std::string::string(v20, a4);
    v13 = Spectre::Engine::GpuProfilerFrame::BeginTimeSpanMarker(v10, v12, v11);
    v14 = v9[1];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v15 = (volatile signed __int32 *)v9[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v15 )
    {
      *a2 = v13;
      a2[1] = (__int64)v15;
      _InterlockedIncrement(v15 + 3);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
    }
    Spectre::Engine::Mutex::unlock(this);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Engine::Mutex::unlock(this);
  }
  return a2;
}
