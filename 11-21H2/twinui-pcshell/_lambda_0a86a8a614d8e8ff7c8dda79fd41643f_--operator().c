/*
 * XREFs of _lambda_0a86a8a614d8e8ff7c8dda79fd41643f_::operator() @ 0x1805677AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___::Run @ 0x180568710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___--Run.c)
 * Callees:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

__int64 lambda_0a86a8a614d8e8ff7c8dda79fd41643f_::operator()()
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
             (void *)0x190,
             (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
             v1);
  }
  return result;
}
