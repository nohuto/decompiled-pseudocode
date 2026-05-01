/*
 * XREFs of ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x1806E96DC
 * Callers:
 *     ?EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E79C0 (-EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?copy_ref@?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806E40F8 (-copy_ref@-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackground.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SharedDesktopBackgroundVisualHost::StartXamlHostThread(SharedDesktopBackgroundVisualHost *this)
{
  RTL_SRWLOCK *v2; // rbx
  char v3; // si
  void *v5; // rdx
  BOOL v6; // eax
  winrt *v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *pData; // [rsp+58h] [rbp+10h] BYREF
  HANDLE pHandle; // [rsp+60h] [rbp+18h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 176);
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  if ( *((_DWORD *)this + 46) || *((_BYTE *)this + 210) )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    *((_DWORD *)this + 46) = 1;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( !v3 )
    return 0;
  AcquireSRWLockExclusive(v2);
  wil::details::ResetEvent(*((wil::details **)this + 27), v5);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  pHandle = 0LL;
  pData = 0LL;
  winrt::com_ptr<SharedDesktopBackgroundVisualHost>::copy_ref((volatile __int64 **)&pData, (__int64)this);
  v6 = SHCreateThreadWithHandle(
         (LPTHREAD_START_ROUTINE)lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_,
         pData,
         0xC000u,
         (LPTHREAD_START_ROUTINE)lambda_3a06c2c252ae701a17f26d0b735b6b61_::_lambda_invoker_cdecl_,
         &pHandle);
  try
  {
    if ( !v6 )
      winrt::throw_last_error(v7);
    AcquireSRWLockExclusive(v2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 29,
      pHandle);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13B,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
      v8);
    AcquireSRWLockExclusive((PSRWLOCK)this + 22);
    *((_DWORD *)this + 46) = 0;
    if ( this != (SharedDesktopBackgroundVisualHost *)-176LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
  }
  return 1;
}
