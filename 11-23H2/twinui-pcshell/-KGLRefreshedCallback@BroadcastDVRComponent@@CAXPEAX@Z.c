/*
 * XREFs of ?KGLRefreshedCallback@BroadcastDVRComponent@@CAXPEAX@Z @ 0x1803D8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b0bba9217c60fc9f1eb04f96e77e4694___ @ 0x1803D1EC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b0bba9217c60fc9f1eb04f96e77e4694___.c)
 */

void __fastcall BroadcastDVRComponent::KGLRefreshedCallback(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  v4 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  Windows::Internal::ComTaskPool::QueueTask__lambda_b0bba9217c60fc9f1eb04f96e77e4694___(v3, v2, a1[60], &v4);
  if ( v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
}
