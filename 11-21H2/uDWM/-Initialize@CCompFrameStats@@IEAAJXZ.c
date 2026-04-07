/*
 * XREFs of ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x18000581C
 * Callers:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::Initialize(HMODULE *this)
{
  HMODULE *v1; // r14
  unsigned int v3; // ebx
  HANDLE WaitableTimerW; // rax
  HANDLE Thread; // rax
  HANDLE *v6; // rdi
  HANDLE v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 3;
  v3 = 0;
  if ( !GetModuleHandleExA(4u, (LPCSTR)CCompFrameStats::ThreadEntryPoint, this + 3) )
    return (unsigned int)-2147467259;
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  v8 = WaitableTimerW;
  if ( this + 5 != (HMODULE *)&v8 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 5,
      WaitableTimerW);
    v8 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v8);
  if ( (unsigned __int64)this[5] - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = -2147024890;
    goto LABEL_12;
  }
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CCompFrameStats::ThreadEntryPoint, this, 4u, 0LL);
  v8 = Thread;
  v6 = (HANDLE *)(this + 4);
  if ( this + 4 != (HMODULE *)&v8 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 4,
      Thread);
    v8 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v8);
  if ( (char *)*v6 - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v3 = -2147024882;
LABEL_12:
    FreeLibrary(*v1);
    *v1 = 0LL;
    return v3;
  }
  (*((void (__fastcall **)(HMODULE *))*this + 1))(this);
  SetThreadPriority(*v6, -1);
  ResumeThread(*v6);
  return v3;
}
