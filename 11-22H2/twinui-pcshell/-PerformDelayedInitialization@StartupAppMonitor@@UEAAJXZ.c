/*
 * XREFs of ?PerformDelayedInitialization@StartupAppMonitor@@UEAAJXZ @ 0x1801A9600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6808b338f89be0d2d60c00a970e053ed__&_ @ 0x1801A9634 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_6808b338f89be0d2d60c00a970e053ed__-_.c)
 */

__int64 __fastcall StartupAppMonitor::PerformDelayedInitialization(StartupAppMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 40;
  v3 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6808b338f89be0d2d60c00a970e053ed____(
         this,
         a2,
         a3,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
