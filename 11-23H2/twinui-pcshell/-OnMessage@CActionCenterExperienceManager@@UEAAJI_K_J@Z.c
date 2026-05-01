/*
 * XREFs of ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180183E70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180183EB0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18019C9EC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnMessage(
        CActionCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  char *v5; // rcx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (_DWORD)a3 == 67 && a2 == 26 )
    {
      v7 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)((char *)this - 64));
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        v9 = v8;
        v10 = 584LL;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v5 = (char *)this - 64;
    if ( a3 == v5 )
    {
      v6 = CActionCenterExperienceManager::OnTargetedMessage(v5, a4);
      if ( v6 < 0 )
      {
        v9 = (unsigned int)v6;
        v10 = 578LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)v9);
      }
    }
  }
  return 0LL;
}
