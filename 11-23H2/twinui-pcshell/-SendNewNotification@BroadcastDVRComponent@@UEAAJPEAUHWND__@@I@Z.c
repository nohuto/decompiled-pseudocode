/*
 * XREFs of ?SendNewNotification@BroadcastDVRComponent@@UEAAJPEAUHWND__@@I@Z @ 0x1803DB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bbdef009ac6d12572d5652df4e291152___ @ 0x1803D2010 (Windows--Internal--ComTaskPool--QueueTask__lambda_bbdef009ac6d12572d5652df4e291152___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::SendNewNotification(BroadcastDVRComponent *this, HWND a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  BroadcastDVRComponent *v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BroadcastDVRComponent *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  if ( a3 != 2 )
  {
    v6 = -2147024809;
    v7 = 455LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  *(_QWORD *)v11 = a2;
  v12 = 2;
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_bbdef009ac6d12572d5652df4e291152___(
         v9,
         v8,
         *((_DWORD *)this + 60),
         (__int64)v11);
  if ( v13 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v6 < 0 )
  {
    v7 = 463LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( this )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v6;
}
