/*
 * XREFs of _lambda_bfcda2f4b09e169516dee7a5816294eb_::operator() @ 0x180625080
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::Run @ 0x180626250 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___--Run.c)
 * Callees:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

__int64 lambda_bfcda2f4b09e169516dee7a5816294eb_::operator()()
{
  __int64 result; // rax
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    result = Win32AppStateManager::UpdateAppViewWorker();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x192,
             (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
             v1);
  }
  return result;
}
