/*
 * XREFs of ?OnShellHookMessage@BroadcastDVRComponent@@UEAAJ_K_J@Z @ 0x1803DA320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cb7dc9aacdd84c31e99625f95c4eec33___ @ 0x1803D20A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_cb7dc9aacdd84c31e99625f95c4eec33___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::OnShellHookMessage(BroadcastDVRComponent *this, __int64 a2, int a3)
{
  __int16 v3; // esi^2
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  int v11; // [rsp+20h] [rbp-18h] BYREF
  char *v12; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = HIWORD(a3);
  v6 = (char *)this - 152;
  v14 = (__int64)this - 152;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  if ( a2 == 12 && (unsigned __int16)((v3 & 0xFFF) - 55) <= 7u )
  {
    LOWORD(v11) = v3 & 0xFFF;
    v12 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_cb7dc9aacdd84c31e99625f95c4eec33___(
           v8,
           v7,
           *((_DWORD *)this + 22),
           &v11);
    if ( v12 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3B,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    v9 = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v9;
}
