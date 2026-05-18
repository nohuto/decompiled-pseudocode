/*
 * XREFs of ?ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x1800739CC
 * Callers:
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?CopyTexture@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@0@Z @ 0x18003914C (-CopyTexture@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VTexture@Engine@Spectre@@@std@@0@.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 *     ??1GpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x1800A224C (--1GpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD **__fastcall Spectre::Engine::ImageProcessingManager::ResolveMultisampledInput(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *CommandList; // rax
  _QWORD **v8; // [rsp+20h] [rbp-29h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h] BYREF
  std::_Ref_count_base *v13; // [rsp+50h] [rbp+7h]
  _BYTE v14[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v8 = a2;
  CommandList = (_QWORD *)Spectre::Engine::RenderDevice::GetCommandList(*a4);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v8,
    CommandList);
  std::string::string(v15, (__int64)"IPM_ResolveMultisampledInput");
  Spectre::Engine::GpuProfilerScope::GpuProfilerScope(v14, &v8, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  Spectre::Engine::FrameBuffer::GetTexture(*(_QWORD *)(a1 + 456), &v12);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v10,
    (_QWORD *)(a1 + 64));
  Spectre::Engine::CommandList::CopyTexture(v8, (__int64)&v10, (__int64)&v12);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 64));
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Spectre::Engine::GpuProfilerScope::~GpuProfilerScope((Spectre::Engine::GpuProfilerScope *)v14);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
