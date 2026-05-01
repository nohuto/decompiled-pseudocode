/*
 * XREFs of ?OnIdleStateChanged@BroadcastDVRComponent@@UEAAJH@Z @ 0x180062C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_398c59650b4848a9090526bc8733f68c___ @ 0x180062CC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_398c59650b4848a9090526bc8733f68c___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::OnIdleStateChanged(BroadcastDVRComponent *this, int a2)
{
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  int v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 136;
  v12 = (__int64)this - 136;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  if ( *((_BYTE *)this + 296) )
  {
    v9 = a2;
    v10 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_398c59650b4848a9090526bc8733f68c___(
           v6,
           v5,
           *((unsigned int *)this + 26),
           &v9);
    if ( v10 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA5,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v7,
        v9);
  }
  else
  {
    v7 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v7;
}
