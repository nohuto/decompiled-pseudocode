/*
 * XREFs of ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182CF8
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___ @ 0x180182DF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___.c)
 *     ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182EB0 (-IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall BroadcastDVRComponent::IsGameDVREnabled(BroadcastDVRComponent *this)
{
  char v2; // di
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  BroadcastDVRComponent *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 444);
  v4 = 0;
  if ( *((_BYTE *)this + 445) )
  {
    if ( BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(this) )
    {
      v3 = *((_QWORD *)this + 32);
      if ( v3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
          v4 = 1;
      }
    }
  }
  *((_BYTE *)this + 444) = v4;
  if ( v2 != v4 )
  {
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    Windows::Internal::ComTaskPool::QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___(
      v6,
      v5,
      *((unsigned int *)this + 60),
      &v8);
    if ( v8 )
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  }
  return *((_BYTE *)this + 444);
}
