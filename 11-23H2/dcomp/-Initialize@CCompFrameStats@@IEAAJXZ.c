/*
 * XREFs of ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x180004074
 * Callers:
 *     ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z @ 0x180003B5C (-Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationSt.c)
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z @ 0x180003E78 (-Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z.c)
 *     ?Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z @ 0x1801A55D4 (-Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z.c)
 *     ?Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z @ 0x1801A979C (-Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::Initialize(HMODULE *this)
{
  HMODULE *v1; // r14
  unsigned int v3; // ebx
  char *WaitableTimerW; // rax
  char *Thread; // rax
  HANDLE *v6; // rdi
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 6;
  v3 = 0;
  if ( !GetModuleHandleExA(4u, (LPCSTR)CCompFrameStats::ThreadEntryPoint, this + 6) )
    return (unsigned int)-2147467259;
  WaitableTimerW = (char *)CreateWaitableTimerW(0LL, 0, 0LL);
  if ( this + 8 == (HMODULE *)&v8 )
  {
    if ( (unsigned __int64)(WaitableTimerW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(WaitableTimerW);
  }
  else
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 8,
      WaitableTimerW);
  }
  if ( (unsigned __int64)this[8] - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = -2147024890;
    goto LABEL_16;
  }
  Thread = (char *)CreateThread(0LL, 0LL, CCompFrameStats::ThreadEntryPoint, this, 4u, 0LL);
  v6 = (HANDLE *)(this + 7);
  if ( this + 7 == (HMODULE *)&v8 )
  {
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
  }
  else
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 7,
      Thread);
  }
  if ( (char *)*v6 - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v3 = -2147024882;
LABEL_16:
    FreeLibrary(*v1);
    *v1 = 0LL;
    return v3;
  }
  (*((void (__fastcall **)(HMODULE *))*this + 1))(this);
  SetThreadPriority(*v6, -1);
  ResumeThread(*v6);
  return v3;
}
