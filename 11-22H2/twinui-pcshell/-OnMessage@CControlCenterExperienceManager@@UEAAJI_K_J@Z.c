/*
 * XREFs of ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180143E30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x180143E74 (-OnShellReady@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnControlCenterShowPendingTimerTick@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804204AC (-OnControlCenterShowPendingTimerTick@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnMessage(
        CControlCenterExperienceManager *this,
        int a2,
        CControlCenterExperienceManager *a3,
        __int16 a4)
{
  CControlCenterExperienceManager *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v5 = (CControlCenterExperienceManager *)((char *)this - 48);
    if ( a3 == (CControlCenterExperienceManager *)((char *)this - 48) )
    {
      if ( a4 )
      {
        if ( a4 != 1 )
        {
          v7 = -2147418113;
          v9 = 742LL;
          v8 = 2147549183LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)v8);
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2D0,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)v7);
          return 0LL;
        }
        v6 = CControlCenterExperienceManager::OnControlCenterShowPendingTimerTick(v5);
        v7 = v6;
        if ( v6 < 0 )
        {
          v9 = 737LL;
          goto LABEL_11;
        }
      }
      else
      {
        v6 = CControlCenterExperienceManager::OnShellReady(v5);
        v7 = v6;
        if ( v6 < 0 )
        {
          v9 = 733LL;
LABEL_11:
          v8 = (unsigned int)v6;
          goto LABEL_12;
        }
      }
    }
  }
  return 0LL;
}
