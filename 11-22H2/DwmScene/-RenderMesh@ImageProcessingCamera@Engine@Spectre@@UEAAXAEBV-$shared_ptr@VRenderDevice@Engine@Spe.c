/*
 * XREFs of ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@AEBV10@@Z @ 0x18001E840 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001E840.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888 (--$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA-AV-$sh.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 *     ??1GpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x1800A224C (--1GpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::ImageProcessingCamera::RenderMesh(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        Spectre::Engine::MeshInstance **a4,
        _QWORD *a5)
{
  char *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 i; // rbx
  __int64 v14; // [rsp+20h] [rbp-81h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-79h]
  __int64 v16; // [rsp+30h] [rbp-71h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-69h]
  _BYTE v18[8]; // [rsp+40h] [rbp-61h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-59h]
  _BYTE v20[16]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v21[3]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v22[4]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v23[4]; // [rsp+98h] [rbp-9h] BYREF

  v9 = std::operator+<char>((char *)v22, a1 + 3, " ");
  std::operator+<char>(v23, (void **)v9, a5);
  std::string::_Tidy_deallocate((__int64)v22);
  Spectre::Engine::Camera::GetCommandList((__int64)a1, &v16, a2);
  Spectre::Engine::RenderDevice::GetCommandList(*a2);
  Spectre::Engine::GpuProfilerScope::GpuProfilerScope(v20, &v16, v23);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v18);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v21, v10);
  if ( v19 )
    std::_Ref_count_base::_Decwref(v19);
  (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD *))(*a1 + 192LL))(a1, a2, a3);
  v11 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this((__int64)(a1 + 1), v22);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::Camera const,Spectre::Engine::Component>(&v14, v11);
  v12 = a1[14];
  for ( i = a1[13]; i != v12; i += 48LL )
    Spectre::Engine::MeshInstance::Render(*a4, &v16, 0LL, (__int64)&v14);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v21);
  Spectre::Engine::GpuProfilerScope::~GpuProfilerScope((Spectre::Engine::GpuProfilerScope *)v20);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  std::string::_Tidy_deallocate((__int64)v23);
}
