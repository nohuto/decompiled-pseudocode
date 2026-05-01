/*
 * XREFs of ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803DBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1801BD0C8 (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5bb7faa24d55580d837ad648107af7b9___ @ 0x1803D1D0C (Windows--Internal--ComTaskPool--QueueTask__lambda_5bb7faa24d55580d837ad648107af7b9___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::SetMicrophoneCaptureState(
        BroadcastDVRComponent *this,
        HWND a2,
        char a3,
        char a4)
{
  BroadcastDVRComponent *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  HWND v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]
  char v16; // [rsp+31h] [rbp-17h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BroadcastDVRComponent *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  if ( *((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v8) )
  {
    *(_QWORD *)v13 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v13);
    v14 = a2;
    v15 = a3;
    v16 = a4;
    v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_5bb7faa24d55580d837ad648107af7b9___(
            v10,
            v9,
            *((_DWORD *)this + 60),
            (__int64)v13);
    if ( *(_QWORD *)v13 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 16LL))(*(_QWORD *)v13);
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    v11 = 0;
  }
  (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v11;
}
