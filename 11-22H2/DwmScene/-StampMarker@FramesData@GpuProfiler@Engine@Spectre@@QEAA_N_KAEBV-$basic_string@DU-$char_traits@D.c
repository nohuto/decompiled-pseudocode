/*
 * XREFs of ?StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A1500
 * Callers:
 *     ?StampMarker@GpuProfiler@Engine@Spectre@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A15B8 (-StampMarker@GpuProfiler@Engine@Spectre@@QEAA_NAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A38C8 (-Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Spectre::Engine::GpuProfiler::FramesData::StampMarker(
        Spectre::Engine::Mutex *this,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+40h] [rbp-38h] BYREF

  Spectre::Engine::Mutex::lock(this);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame((__int64)this, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *((_QWORD *)this + 2 * v12 + 8);
    v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v13,
           a4);
    v9 = std::string::string(v14, (__int64)&Spectre::Engine::GpuProfiler::kPostMarker);
    Spectre::Engine::GpuProfilerFrame::Stamp(v7, v9, v8);
    Spectre::Engine::Mutex::unlock(this);
    return 1;
  }
  else
  {
    Spectre::Engine::Mutex::unlock(this);
    return 0;
  }
}
