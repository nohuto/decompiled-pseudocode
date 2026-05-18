/*
 * XREFs of ??$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180086044
 * Callers:
 *     ??$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@XZ @ 0x180086144 (--$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$share_ea_180086144.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 *     ??0VertexLayout@Engine@Spectre@@QEAA@XZ @ 0x18008BCDC (--0VertexLayout@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::VertexLayout,>(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  volatile signed __int32 *v6; // rdx
  std::_Ref_count_base *v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v4 = operator new(0xC0uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayout>::`vftable';
    Spectre::Engine::VertexLayout::VertexLayout((Spectre::Engine::VertexLayout *)(v4 + 4));
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)a2 = v5 + 4;
  *(_QWORD *)(a2 + 8) = v5;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 101), (__int64)v9);
  *(_OWORD *)v8 = 0LL;
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    v8[0] = *(std::_Ref_count_base **)a2;
    v8[1] = (std::_Ref_count_base *)v6;
    _InterlockedIncrement(v6 + 3);
  }
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::push_back(a1 + 108, v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decwref(v8[1]);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v9);
  Spectre::Engine::Engine::CreateResourceInternal(
    (struct Spectre::Engine::Engine *)a1,
    *(Spectre::Engine::SharedResource **)a2);
  return a2;
}
