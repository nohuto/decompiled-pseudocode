/*
 * XREFs of ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x1800161CC
 * Callers:
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@XZ @ 0x180017544 (--$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@0@X.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  std::make_shared<Spectre::Engine::Texture,>(a2);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 808));
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v5, a2);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::push_back((__int64 *)(a1 + 864), &v5);
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v7);
  Spectre::Engine::Engine::CreateResourceInternal(a1, *a2, 1LL);
  return a2;
}
