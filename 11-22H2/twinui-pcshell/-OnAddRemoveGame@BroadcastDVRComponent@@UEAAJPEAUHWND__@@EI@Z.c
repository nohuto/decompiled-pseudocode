/*
 * XREFs of ?OnAddRemoveGame@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EI@Z @ 0x1803D98B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803D1C78 (Windows--Internal--ComTaskPool--QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::OnAddRemoveGame(
        BroadcastDVRComponent *this,
        HWND a2,
        char a3,
        unsigned int a4)
{
  unsigned int v8; // ebp
  char v9; // si
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15[2]; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  unsigned int v17; // [rsp+2Ch] [rbp-2Ch]
  BroadcastDVRComponent *v18; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BroadcastDVRComponent *v21; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v21 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v9 = 0;
  if ( a3 && a4 )
  {
    if ( a4 >= 0x21 )
    {
      v10 = -2147024809;
      v11 = 420LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_14;
    }
    v8 = a4;
    if ( a4 - 6 > 2 && a4 - 24 > 3 )
    {
      v10 = -2147024809;
      v11 = 422LL;
      goto LABEL_13;
    }
    v9 = 1;
  }
  *(_QWORD *)v15 = a2;
  v16 = a3;
  v17 = v8;
  v18 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v19 = v9;
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___(
          v13,
          v12,
          *((_DWORD *)this + 60),
          (__int64)v15);
  if ( v18 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v10 < 0 )
  {
    v11 = 431LL;
    goto LABEL_13;
  }
LABEL_14:
  if ( this )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v10;
}
