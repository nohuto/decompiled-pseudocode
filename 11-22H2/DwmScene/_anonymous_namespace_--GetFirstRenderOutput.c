/*
 * XREFs of _anonymous_namespace_::GetFirstRenderOutput @ 0x18003431C
 * Callers:
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::GetFirstRenderOutput(__int64 a1, __int64 a2)
{
  Spectre::Engine::RenderDevice **v3; // rdi
  Spectre::Engine::RenderDevice **v4; // rsi
  _QWORD *Output; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v9; // [rsp+40h] [rbp-28h]
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  Spectre::Engine::Engine::SafeGetDeviceList(a2, v10);
  v3 = (Spectre::Engine::RenderDevice **)v10[0];
  v4 = (Spectre::Engine::RenderDevice **)v10[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v10);
      *(_OWORD *)a1 = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)*v3 + 32LL))(*v3) )
      break;
LABEL_6:
    v3 += 2;
  }
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
    (Spectre::Engine::RenderDevice *)((char *)*v3 + 24),
    (__int64)v7);
  if ( !(unsigned int)Spectre::Engine::RenderDevice::GetOutputCount(*v3) )
  {
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v7);
    goto LABEL_6;
  }
  Output = Spectre::Engine::RenderDevice::GetOutput((__int64)*v3, &v8, 0);
  *(_QWORD *)a1 = *Output;
  *(_QWORD *)(a1 + 8) = Output[1];
  *Output = 0LL;
  Output[1] = 0LL;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v7);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v10);
  return a1;
}
