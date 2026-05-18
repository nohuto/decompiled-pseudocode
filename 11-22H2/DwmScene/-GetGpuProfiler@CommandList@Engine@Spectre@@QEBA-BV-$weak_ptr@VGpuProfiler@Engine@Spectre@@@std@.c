/*
 * XREFs of ?GetGpuProfiler@CommandList@Engine@Spectre@@QEBA?BV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@XZ @ 0x1800393A8
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ @ 0x180026528 (-GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::CommandList::GetGpuProfiler(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  struct Spectre::Engine::IRenderOutput *DefaultOutput; // rax
  _QWORD *v6; // rax
  Spectre::Engine::RenderDevice *v8; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && *(_DWORD *)(v3 + 8) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)(a1 + 120) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v4 = *(_QWORD *)(a1 + 120);
      a2[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    }
  }
  else
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v8);
    if ( std::operator!=<Spectre::Engine::Scene>(&v8) && (unsigned int)Spectre::Engine::RenderDevice::GetOutputCount(v8) )
    {
      DefaultOutput = Spectre::Engine::RenderDevice::GetDefaultOutput(v8);
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(struct Spectre::Engine::IRenderOutput *))(*(_QWORD *)DefaultOutput
                                                                                        + 184LL))(DefaultOutput);
      std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(a2, v6);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  return a2;
}
