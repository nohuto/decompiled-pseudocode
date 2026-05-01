/*
 * XREFs of ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1803D9338
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1803D8790 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___ @ 0x1803D47AC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___.c)
 */

__int64 __fastcall PeoplePaneViewInfo::StartTelemetryShowTimer(PeoplePaneViewInfo *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 72);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  v9 = *((_DWORD *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___(
         v4,
         v3,
         (__int64)v1,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
