/*
 * XREFs of ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1801BD0C8 (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___ @ 0x1803D1F80 (Windows--Internal--ComTaskPool--QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::ProcessCommand(__int64 a1, int a2)
{
  __int64 v4; // rbx
  BroadcastDVRComponent *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 8;
  v13 = a1 - 8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  if ( *(_BYTE *)(a1 + 424) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v5) )
  {
    v10 = a2;
    v11 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___(
           v7,
           v6,
           *(_DWORD *)(a1 + 232),
           &v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27D,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v8 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v8;
}
