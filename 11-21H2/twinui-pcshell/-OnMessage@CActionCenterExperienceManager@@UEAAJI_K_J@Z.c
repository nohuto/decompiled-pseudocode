/*
 * XREFs of ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A6C40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800A6C7C (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnMessage(
        CActionCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  char *v4; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (_DWORD)a3 == 67 && a2 == 26 )
    {
      v6 = CActionCenterExperienceManager::OnTargetedMessage((char *)this - 64, 2LL);
      if ( v6 < 0 )
      {
        v7 = 559LL;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v4 = (char *)this - 64;
    if ( a3 == v4 )
    {
      v6 = CActionCenterExperienceManager::OnTargetedMessage(v4, a4);
      if ( v6 < 0 )
      {
        v7 = 553LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v7,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6,
          v8);
      }
    }
  }
  return 0LL;
}
