/*
 * XREFs of ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948
 * Callers:
 *     ?BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0E14 (-BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B340 (--0-$multimap@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarker_ea_18002B340.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?Begin@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A1D90 (-Begin@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@@.c)
 *     ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04 (-End@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z.c)
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800A28B8 (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::GpuProfilerFrame::Begin(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *Query; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  std::_Ref_count_base *v14; // rcx
  _QWORD v15[2]; // [rsp+28h] [rbp-89h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v17; // [rsp+58h] [rbp-59h]
  __int64 v18; // [rsp+60h] [rbp-51h]
  __int64 v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+90h] [rbp-21h]
  __int64 v25; // [rsp+98h] [rbp-19h]
  __int64 v26; // [rsp+A0h] [rbp-11h]
  __int64 v27; // [rsp+A8h] [rbp-9h]
  char v28; // [rsp+B0h] [rbp-1h]
  __int64 v29; // [rsp+B8h] [rbp+7h]
  void *v30[5]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+E8h] [rbp+37h] BYREF

  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0LL;
  std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>(v30);
  Spectre::Engine::GpuProfilerFrame::Result::operator=(a1 + 928, (__int64)v16);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    v30,
    (__int64)v30);
  *(_QWORD *)(a1 + 1056) = a2;
  Query = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*(_QWORD *)(a1 + 912), (__int64)v16, 0);
  Spectre::Engine::RenderDeviceQuery::operator=(a1, Query);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)v16);
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v15,
           a3);
    Spectre::Engine::RenderDeviceQuery::Begin(a1, v7);
  }
  v8 = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*(_QWORD *)(a1 + 912), (__int64)v16, 2u);
  Spectre::Engine::RenderDeviceQuery::operator=(a1 + 704, v8);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)v16);
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v15,
           a3);
    Spectre::Engine::RenderDeviceQuery::Begin(a1 + 704, v9);
  }
  v10 = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*(_QWORD *)(a1 + 912), (__int64)v16, 1u);
  Spectre::Engine::RenderDeviceQuery::operator=(a1 + 176, v10);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((std::_Ref_count_base **)v16);
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v15, a3);
    v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v31,
            v11);
    Spectre::Engine::RenderDeviceQuery::End(a1 + 176, v12, v13);
  }
  *(_DWORD *)(a1 + 920) = 1;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 896), a3);
  v14 = (std::_Ref_count_base *)a3[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
