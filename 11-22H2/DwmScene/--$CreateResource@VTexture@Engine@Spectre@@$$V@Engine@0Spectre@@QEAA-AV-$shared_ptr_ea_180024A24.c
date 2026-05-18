/*
 * XREFs of ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@3@@Z @ 0x180024A24
 * Callers:
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@XZ @ 0x180017544 (--$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@0@X.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033170 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V-$shared_ptr@VRenderDevice@.c)
 */

// Hidden C++ exception states: #wind=4
Spectre::Engine::SharedResource **__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(
        struct Spectre::Engine::Engine *a1,
        Spectre::Engine::SharedResource **a2,
        _QWORD *a3)
{
  std::_Ref_count_base *v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-38h]
  _QWORD v10[6]; // [rsp+38h] [rbp-30h] BYREF

  std::make_shared<Spectre::Engine::Texture,>(a2);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((struct Spectre::Engine::Engine *)((char *)a1 + 808));
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v8, a2);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::push_back((__int64 *)a1 + 108, &v8);
  if ( v9 )
    std::_Ref_count_base::_Decwref(v9);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v10);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v10, a3);
  Spectre::Engine::Engine::CreateResourceInternal(a1, *a2);
  v6 = (std::_Ref_count_base *)a3[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a2;
}
