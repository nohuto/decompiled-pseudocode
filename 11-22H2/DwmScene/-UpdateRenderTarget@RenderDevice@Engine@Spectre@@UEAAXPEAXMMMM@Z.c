/*
 * XREFs of ?UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z @ 0x180027360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::RenderDevice::UpdateRenderTarget(
        Spectre::Engine::RenderDevice *this,
        void *a2,
        float a3,
        float a4)
{
  unsigned int OutputCount; // esi
  unsigned int i; // ebx
  __int64 v8; // r14
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-50h]
  _BYTE v11[32]; // [rsp+40h] [rbp-48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)this + 16LL))(this) )
  {
    OutputCount = Spectre::Engine::RenderDevice::GetOutputCount(this);
    for ( i = 0; i < OutputCount; ++i )
    {
      Spectre::Engine::RenderDevice::GetOutput((__int64)this, &v9, i);
      v8 = v9;
      if ( (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 368LL))(v9) == a2 )
      {
        Spectre::Engine::Lockable::GetExclusiveLock(v8 + 8, v11);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
        std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
      }
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
  }
}
