/*
 * XREFs of ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001BCF4 (-UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z @ 0x180065324 (-MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z.c)
 *     ?Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ @ 0x180066D98 (-Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::Destroy(Windows::UI::Composition::CompositorCommon *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  Microsoft::WRL2::ContextRuntimeClass *v4; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v5; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v6; // rcx
  struct _RTL_GENERIC_TABLE *v7; // rcx
  __int64 v8; // rdx
  int (*v9)(void *, unsigned int, unsigned int, const void *); // r8
  __int64 v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx

  v1 = *((_QWORD *)this + 62);
  *((_QWORD *)this + 62) = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(this, v1);
  v3 = *((_QWORD *)this + 103);
  *((_QWORD *)this + 103) = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(this, v3);
  v4 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 64);
  if ( v4 )
  {
    *((_QWORD *)this + 64) = 0LL;
    Microsoft::WRL2::ContextRuntimeClass::MarkCached(v4, 0);
  }
  v5 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 105);
  if ( v5 )
    Microsoft::WRL2::ContextRuntimeClass::MarkCached(v5, 0);
  v6 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 134);
  if ( v6 )
    Microsoft::WRL2::ContextRuntimeClass::MarkCached(v6, 0);
  v7 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 104);
  if ( v7 )
    Windows::UI::Composition::AnimationBindingManager::Shutdown(v7);
  v8 = *((_QWORD *)this + 53);
  if ( v8 )
  {
    if ( *((_BYTE *)this + 96) == 1
      || (*((_BYTE *)this + 96) = 1,
          v9 = Windows::UI::Composition::CompositorCommon::StaticDisposeItemProc,
          LOBYTE(v9) = 1,
          (*(void (__fastcall **)(_QWORD, _QWORD, int (*)(void *, unsigned int, unsigned int, const void *)))(**(_QWORD **)(v8 + 32) + 72LL))(
            *(_QWORD *)(v8 + 32),
            *(unsigned int *)(v8 + 64),
            v9),
          !*((_BYTE *)this + 96)) )
    {
      Microsoft::WRL2::FailFast::Unexpected("Unexpected transition");
    }
    *((_BYTE *)this + 96) = 0;
  }
  if ( *((_QWORD *)this + 128) )
  {
    if ( (*((_BYTE *)this + 1032) & 1) != 0 )
      Windows::UI::Composition::CompositorCommon::UnregisterCommitCompletionWait(this);
    CloseHandle(*((HANDLE *)this + 128));
    *((_QWORD *)this + 128) = 0LL;
    while ( 1 )
    {
      v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 126);
      if ( !v11 )
        break;
      *((_QWORD *)this + 126) = *((_QWORD *)v11 + 21);
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
    *((_QWORD *)this + 127) = 0LL;
  }
  v10 = *((_QWORD *)this + 66);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 528);
  }
  Microsoft::WRL2::ContextRuntimeClass::Destroy(this);
}
