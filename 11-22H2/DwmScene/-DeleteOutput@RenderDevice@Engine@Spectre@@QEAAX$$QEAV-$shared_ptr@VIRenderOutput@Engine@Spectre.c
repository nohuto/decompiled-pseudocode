/*
 * XREFs of ?DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800262CC
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ?LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180026D3C (-LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA-AV-$unique_lock@VMutex@Engine@Spectre@@.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?WaitPendingFrames@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A1870 (-WaitPendingFrames@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::RenderDevice::DeleteOutput(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r14
  std::_Ref_count_base *v4; // rsi
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // r8
  Spectre::Engine::GpuProfiler **v8; // rax
  unsigned int v9; // edx
  __int64 *v10; // rbp
  std::_Ref_count_base *v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a2;
  v12[0] = *a2;
  v4 = (std::_Ref_count_base *)a2[1];
  v12[1] = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  Spectre::Engine::RenderDevice::LockEngineIfNecessary(a1, v14);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 3));
  v5 = (__int64 *)a1[31];
  if ( v5 != (__int64 *)a1[32] )
  {
    while ( 1 )
    {
      v6 = v5 + 2;
      if ( std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v5, v12) )
        break;
      v5 = v6;
      if ( v6 == v7 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (Spectre::Engine::GpuProfiler **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    Spectre::Engine::GpuProfiler::WaitPendingFrames(*v8, v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v10 = (__int64 *)a1[32];
    while ( v6 != v10 )
    {
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v6 - 2, v6);
      v6 += 2;
    }
    v11 = *(std::_Ref_count_base **)(a1[32] - 8LL);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    a1[32] -= 16LL;
  }
LABEL_11:
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v13);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v14);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
