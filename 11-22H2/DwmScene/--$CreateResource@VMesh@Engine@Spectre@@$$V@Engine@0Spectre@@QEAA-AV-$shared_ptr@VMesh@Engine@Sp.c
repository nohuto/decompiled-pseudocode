/*
 * XREFs of ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180016024
 * Callers:
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x1800160D8 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VM_ea_1800160D8.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ??$make_shared@VMesh@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VMesh@Engine@Spectre@@@0@XZ @ 0x180017288 (--$make_shared@VMesh@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VMesh@Engine@Spectre@@@0@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::Mesh,>(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rdx
  std::_Ref_count_base *v6[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  std::make_shared<Spectre::Engine::Mesh,>(a2);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 808));
  *(_OWORD *)v6 = 0LL;
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    v6[0] = *(std::_Ref_count_base **)a2;
    v6[1] = (std::_Ref_count_base *)v4;
    _InterlockedIncrement(v4 + 3);
  }
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::push_back((__int64 *)(a1 + 864), v6);
  if ( v6[1] )
    std::_Ref_count_base::_Decwref(v6[1]);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v7);
  Spectre::Engine::Engine::CreateResourceInternal(a1, *a2, 1LL);
  return a2;
}
