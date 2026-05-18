/*
 * XREFs of ??$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@AEAW4Attribute@DeviceVertexBuffer@01@@Z @ 0x18004728C
 * Callers:
 *     ??$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@AEAW4Attribute@DeviceVertexBuffer@01@@Z @ 0x180047268 (--$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Sp.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 *     ??$make_shared@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@std@@YA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@0@AEAW4Attribute@DeviceVertexBuffer@Engine@Spectre@@@Z @ 0x1800479A0 (--$make_shared@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@std@@YA-AV-$s.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::VertexBuffer,enum Spectre::Engine::DeviceVertexBuffer::Attribute &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v6; // rdx
  std::_Ref_count_base *v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  std::make_shared<Spectre::Engine::VertexBuffer,enum Spectre::Engine::DeviceVertexBuffer::Attribute &>(a2, a4);
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
