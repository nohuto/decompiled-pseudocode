/*
 * XREFs of ?AttachDevices@Component@Engine@Spectre@@QEAAXXZ @ 0x1800810A0
 * Callers:
 *     ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250 (-AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Component::AttachDevices(Spectre::Engine::Component *this)
{
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void (__fastcall *v7)(Spectre::Engine::Component *, _QWORD *); // r8
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]

  Engine = Spectre::Engine::Component::GetEngine(this);
  Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, &v12);
  v3 = 0;
  v4 = v12;
  if ( (v13 - v12) >> 4 )
  {
    v5 = 0LL;
    do
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v8,
        (_QWORD *)(v4 + 16 * v5));
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v8 + 24), (__int64)v11);
      v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             &v10,
             &v8);
      v7(this, v6);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      ++v3;
      v4 = v12;
      v5 = v3;
    }
    while ( v3 < (unsigned __int64)((v13 - v12) >> 4) );
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v12);
}
