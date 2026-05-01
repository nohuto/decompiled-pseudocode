/*
 * XREFs of ?DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION@@@Z @ 0x1803D6CFC
 * Callers:
 *     ?StaticDisplayStateChangeWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801BF340 (-StaticDisplayStateChangeWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ef26dee21aeac91685b7d7242343189e___ @ 0x1803D227C (Windows--Internal--ComTaskPool--QueueTask__lambda_ef26dee21aeac91685b7d7242343189e___.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x1803D5CA0 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::DisplayStateChangeWNFCallback(
        BroadcastDVRComponent *this,
        const struct _NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  BroadcastDVRComponent *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)a2 == 1 && !*((_DWORD *)a2 + 132) )
  {
    GameDVRTraceProvider::BroadcastDVRComponent_DisplayStateChangeWNFCallback(*((_DWORD *)a2 + 131));
    v4 = *((_DWORD *)a2 + 131);
    if ( v4 == 2 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)this + 110, 1, 0);
    }
    else if ( !v4 && _InterlockedCompareExchange((volatile signed __int32 *)this + 110, 0, 1) == 1 )
    {
      v7 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
      v7 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_ef26dee21aeac91685b7d7242343189e___(
        v6,
        v5,
        *((_DWORD *)this + 60),
        &v7);
      if ( v7 )
        (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
    }
  }
}
