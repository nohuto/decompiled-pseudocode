/*
 * XREFs of ?StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z @ 0x1800AA0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180148AD0 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___ @ 0x1803D2130 (Windows--Internal--ComTaskPool--QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::StaticPowerNotificationCallback(
        volatile signed __int32 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 )
  {
    v4 = *a3 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *a3 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v4 = a3[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v4 )
    {
      v5 = *((unsigned __int8 *)a3 + 20);
      GameDVRTraceProvider::BroadcastDVRComponent_PowerNotificationCallback(v5);
      if ( v5 )
      {
        _InterlockedCompareExchange(a1 + 109, 1, 0);
      }
      else if ( _InterlockedCompareExchange(a1 + 109, 0, 1) == 1 )
      {
        v9 = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
        v9 = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
        Windows::Internal::ComTaskPool::QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___(
          v8,
          v7,
          *((unsigned int *)a1 + 60),
          &v9);
        if ( v9 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
      }
    }
  }
  return 0LL;
}
