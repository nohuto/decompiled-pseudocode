/*
 * XREFs of ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$make_shared@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YA?AV?$shared_ptr@VRenderOutputDwm@@@0@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK33AEBM@Z @ 0x180017354 (--$make_shared@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV-$shared_ptr@VRenderD.c)
 *     ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90 (--4-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?push_back@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@@Z @ 0x18001B88C (-push_back@-$vector@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180026D3C (-LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA-AV-$unique_lock@VMutex@Engine@Spectre@@.c)
 *     ?AddDependentLock@Lockable@Engine@Spectre@@SAXV?$shared_ptr@VLockable@Engine@Spectre@@@std@@V?$weak_ptr@VLockable@Engine@Spectre@@@5@@Z @ 0x180029F64 (-AddDependentLock@Lockable@Engine@Spectre@@SAXV-$shared_ptr@VLockable@Engine@Spectre@@@std@@V-$w.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::RenderDevice::CreateOutput<RenderOutputDwm,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
        Spectre::Engine::RenderDevice *this,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 v18; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  std::_Ref_count_base *v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  char v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  std::_Ref_count_base *v24; // [rsp+88h] [rbp+Fh]

  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::RenderDevice *)((char *)this + 24));
  v21 = 0LL;
  v22 = 0;
  if ( Spectre::Engine::RenderDevice::GetEngine(this) )
  {
    v14 = Spectre::Engine::RenderDevice::LockEngineIfNecessary(v13, &v23);
    std::unique_lock<Spectre::Engine::Mutex>::operator=(&v21, v14);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v23);
  }
  std::make_shared<RenderOutputDwm,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
    (_DWORD)a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v19, a2);
  std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::push_back((char *)this + 248, &v19);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v18 = 0LL;
  v15 = a2[1];
  if ( v15 )
  {
    *(_QWORD *)&v18 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v18 + 1) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
  }
  v16 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v23);
  v19 = (*(_QWORD *)v16 + 24LL) & -(__int64)(*(_QWORD *)v16 != 0LL);
  v20 = *(std::_Ref_count_base **)(v16 + 8);
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = 0LL;
  Spectre::Engine::Lockable::AddDependentLock(&v19, &v18);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v21);
  return a2;
}
