/*
 * XREFs of ?ReleaseQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAAX$$QEAV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@Z @ 0x180026FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x180016F04 (--$_Emplace_reallocate@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@-$vector@V-$shared_pt.c)
 *     ??$_Try_emplace@W4QueryType@GpuQuery@Engine@Spectre@@$$V@?$map@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@_N@1@$$QEAW4QueryType@GpuQuery@Engine@Spectre@@@Z @ 0x180024F1C (--$_Try_emplace@W4QueryType@GpuQuery@Engine@Spectre@@$$V@-$map@W4QueryType@GpuQuery@Engine@Spect.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::RenderDevice::QueryPool::ReleaseQuery(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::Mutex *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v4 = (Spectre::Engine::Mutex *)(a1 + 8);
  v9 = a1 + 8;
  Spectre::Engine::Mutex::lock((Spectre::Engine::Mutex *)(a1 + 8));
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v5 = *(_QWORD **)std::map<enum Spectre::Engine::GpuQuery::QueryType,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>::_Try_emplace<enum Spectre::Engine::GpuQuery::QueryType,>(
                     (__int64 *)(a1 + 24),
                     (__int64)v7,
                     &v8);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = v5[6];
  if ( v6 == v5[7] )
  {
    std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::IRenderOutput>>(
      v5 + 5,
      (char *)v6,
      a2);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = *a2;
    *(_QWORD *)(v6 + 8) = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[6] += 16LL;
  }
  Spectre::Engine::Mutex::unlock(v4);
}
