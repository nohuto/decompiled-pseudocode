/*
 * XREFs of _lambda_3b43cee47a910f13c141c9ab85b011b8_::operator() @ 0x1801AD21C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b43cee47a910f13c141c9ab85b011b8___::Run @ 0x1801ADAA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b43cee47a910f13c141c9ab85b011b8___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3b43cee47a910f13c141c9ab85b011b8_::operator()(struct IUnknown **a1)
{
  struct IUnknown *v1; // rdi
  HANDLE EventW; // rax
  unsigned int v3; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  EventW = CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  v7 = EventW;
  if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    WaitForSingleObject(EventW, 0x7530u);
    v3 = 0;
  }
  else
  {
    v3 = -2147417824;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)0x80010120LL);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v7);
  v4 = ExperienceManagerUtils::PostToUIThread(0LL, v1, (void *)5);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  return v3;
}
