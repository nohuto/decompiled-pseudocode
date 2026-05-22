/*
 * XREFs of ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180029E50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029030 (-UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ @ 0x180029FF0 (-DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionSurfaceBrush::Destroy(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        __int64 a2)
{
  char *v2; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rdx
  Windows::UI::Composition::CompositorCommon *v6; // rbx
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  Windows::UI::Composition::AnimationLoggingManager *v8; // rcx
  __int64 v9; // rcx

  v2 = (char *)this + 208;
  if ( *((_QWORD *)this + 27) )
  {
    if ( *((_QWORD *)this + 29) )
      Windows::UI::Composition::SurfaceBindPoint::DetachSurface((Windows::UI::Composition::CompositionSurfaceBrush *)((char *)this + 208));
    v4 = (volatile signed __int32 *)*((_QWORD *)v2 + 1);
    if ( v4 )
    {
      *((_QWORD *)v2 + 1) = 0LL;
      if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 64LL))(v4, a2);
      }
    }
    *((_QWORD *)v2 + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    v9 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v9, v5);
  }
  v6 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
  BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(v6);
  Windows::UI::Composition::AnimationBindingManager::UnregisterAllAnimationTargets(
    BindingManager,
    *((_DWORD *)this + 32));
  v8 = (Windows::UI::Composition::AnimationLoggingManager *)*((_QWORD *)v6 + 105);
  if ( v8 )
    Windows::UI::Composition::AnimationLoggingManager::UnregisterDebugPropertyForObject(v8, *((_DWORD *)this + 32));
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
