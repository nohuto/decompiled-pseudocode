/*
 * XREFs of ??$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C31E8
 * Callers:
 *     ?CreateOutput@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@UOutputDescription@34@@Z @ 0x1800C53F0 (-CreateOutput@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA-AV-$shared_ptr@VIRenderOutput@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90 (--4-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?push_back@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@@Z @ 0x18001B88C (-push_back@-$vector@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180026D3C (-LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA-AV-$unique_lock@VMutex@Engine@Spectre@@.c)
 *     ?AddDependentLock@Lockable@Engine@Spectre@@SAXV?$shared_ptr@VLockable@Engine@Spectre@@@std@@V?$weak_ptr@VLockable@Engine@Spectre@@@5@@Z @ 0x180029F64 (-AddDependentLock@Lockable@Engine@Spectre@@SAXV-$shared_ptr@VLockable@Engine@Spectre@@@std@@V-$w.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$make_shared@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@AEAUOutputDescription@34@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@std@@YA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@0@AEAUOutputDescription@Engine@Spectre@@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@@Z @ 0x1800C3BEC (--$make_shared@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@AEAUOutputDescription@34@V-$shared_pt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

std::_Ref_count_base **__fastcall Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::RenderOutputD3D11Gdi,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
        Spectre::Engine::RenderDevice *this,
        std::_Ref_count_base **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  Spectre::Engine::RenderDevice *v9; // rcx
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rax
  std::_Ref_count_base *v12; // rdx
  _QWORD *v13; // rax
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  std::_Ref_count_base *v16; // [rsp+38h] [rbp-48h] BYREF
  std::_Ref_count_base *v17; // [rsp+40h] [rbp-40h]
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  char v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  std::_Ref_count_base *v22; // [rsp+70h] [rbp-10h]

  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::RenderDevice *)((char *)this + 24));
  v19 = 0LL;
  v20 = 0;
  if ( Spectre::Engine::RenderDevice::GetEngine(this) )
  {
    v10 = Spectre::Engine::RenderDevice::LockEngineIfNecessary(v9, (__int64)v18);
    std::unique_lock<Spectre::Engine::Mutex>::operator=((__int64)&v19, v10);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v18);
  }
  std::make_shared<Spectre::Engine::D3D11::RenderOutputD3D11Gdi,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
    a2,
    a3,
    a4,
    a5,
    0);
  (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(std::_Ref_count_base *, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v11 = a2[1];
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  v16 = *a2;
  v17 = a2[1];
  std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::push_back((_QWORD *)this + 31, &v16);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v15 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    *(_QWORD *)&v15 = ((unsigned __int64)*a2 + 8) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v15 + 1) = v12;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 3);
  }
  v13 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v21);
  v18[0] = (*v13 + 24LL) & -(__int64)(*v13 != 0LL);
  v18[1] = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  Spectre::Engine::Lockable::AddDependentLock((__int64)v18, (__int64)&v15);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v19);
  return a2;
}
