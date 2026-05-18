/*
 * XREFs of ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC
 * Callers:
 *     ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0 (-AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38 (-CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?UpdateBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800399E0 (-UpdateBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VArrayBuffer@Engine@Spectre@@@st.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ArrayBuffer::UpdateDeviceBuffer(
        Spectre::Engine::ArrayBuffer *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  _QWORD **v4; // r14
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int ID; // eax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-30h]
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
    (struct Spectre::Engine::RenderDevice *)((char *)a2 + 24),
    (__int64)v12);
  v4 = *(_QWORD ***)Spectre::Engine::RenderDevice::GetCommandList((__int64)a2);
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 12);
  else
    v6 = 0;
  v7 = *((_QWORD *)this + 17);
  v8 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this((__int64)this + 96, &v10);
  Spectre::Engine::CommandList::UpdateBuffer(v4, (__int64)v8, v7, v6);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  ID = Spectre::Engine::RenderDevice::GetID((__int64)a2);
  Spectre::Engine::SharedResource::NotifyDeviceReady((__int64)this, ID);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v12);
}
