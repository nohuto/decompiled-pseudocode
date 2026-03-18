/*
 * XREFs of ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18002CBA4
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x18002E080 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CKstBase::Start(CKstBase *this, const unsigned __int16 *a2)
{
  HANDLE Thread; // rax
  HANDLE *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE v7; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CKstBase::RunKernelThreadStatic, this, 4u, (LPDWORD)&ThreadId);
  v4 = (HANDLE *)((char *)this + 16);
  v7 = Thread;
  if ( v4 != &v7 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v4,
      Thread);
    v7 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v7);
  if ( *v4 )
  {
    SetThreadDescription(*v4, L"DWM Kernel Sensor Thread");
    SetThreadPriority(*v4, 16);
    ResumeThread(*v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
