/*
 * XREFs of ?GetQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAA?AV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@W4QueryType@GpuQuery@34@@Z @ 0x1800266A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VGpuQuery@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@XZ @ 0x1800248E4 (--$CreateResource@VGpuQuery@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr@VG.c)
 *     ??$_Try_emplace@AEBW4QueryType@GpuQuery@Engine@Spectre@@$$V@?$map@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4QueryType@GpuQuery@Engine@Spectre@@@Z @ 0x180024E1C (--$_Try_emplace@AEBW4QueryType@GpuQuery@Engine@Spectre@@$$V@-$map@W4QueryType@GpuQuery@Engine@Sp.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
std::_Ref_count_base **__fastcall Spectre::Engine::RenderDevice::QueryPool::GetQuery(
        __int64 *a1,
        std::_Ref_count_base **a2,
        unsigned int a3)
{
  Spectre::Engine::Mutex *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // r14
  std::_Ref_count_base *v11; // r15
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v14[2]; // [rsp+28h] [rbp-18h] BYREF
  Spectre::Engine::Mutex *v15; // [rsp+70h] [rbp+30h]
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF

  v16 = a3;
  v5 = (Spectre::Engine::Mutex *)(a1 + 1);
  v15 = (Spectre::Engine::Mutex *)(a1 + 1);
  Spectre::Engine::Mutex::lock((Spectre::Engine::Mutex *)(a1 + 1));
  v6 = std::map<enum Spectre::Engine::GpuQuery::QueryType,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>::_Try_emplace<enum Spectre::Engine::GpuQuery::QueryType const &,>(
         a1 + 3,
         (__int64)v14,
         (int *)&v16);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 40LL) == v8 )
  {
    Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::GpuQuery>(a1[2], (__int64 *)v14);
    if ( (*(unsigned __int8 (__fastcall **)(std::_Ref_count_base *, __int64, _QWORD))(*(_QWORD *)v14[0] + 40LL))(
           v14[0],
           a1[2],
           v16) )
    {
      *a2 = v14[0];
      a2[1] = v14[1];
      *(_OWORD *)v14 = 0LL;
      Spectre::Engine::Mutex::unlock(v5);
    }
    else
    {
      if ( v14[1] )
        std::_Ref_count_base::_Decref(v14[1]);
      *a2 = 0LL;
      a2[1] = 0LL;
      Spectre::Engine::Mutex::unlock(v5);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 - 8);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v5 = v15;
    }
    v10 = *(std::_Ref_count_base **)(v8 - 16);
    v11 = *(std::_Ref_count_base **)(v8 - 8);
    v12 = *(std::_Ref_count_base **)(*(_QWORD *)(v7 + 48) - 8LL);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    *(_QWORD *)(v7 + 48) -= 16LL;
    *a2 = v10;
    a2[1] = v11;
    Spectre::Engine::Mutex::unlock(v5);
  }
  return a2;
}
