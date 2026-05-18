/*
 * XREFs of ?BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0F1C
 * Callers:
 *     ?BeginGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002BC20 (-BeginGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ?BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0E14 (-BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spect.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::GpuProfiler::BeginFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  std::_Ref_count_base *v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  Spectre::Engine::Mutex *v9; // r9
  char v10; // di
  std::_Ref_count_base *v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 192) = a3;
  if ( std::atomic<bool>::operator bool(a1 + 184) )
  {
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v12,
           v4);
    v10 = Spectre::Engine::GpuProfiler::FramesData::BeginFrame(v9, v7, v8);
    v11 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return v10;
  }
  else
  {
    v5 = (std::_Ref_count_base *)v4[1];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    return 0;
  }
}
