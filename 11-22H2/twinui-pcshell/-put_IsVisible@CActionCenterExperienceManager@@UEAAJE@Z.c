/*
 * XREFs of ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18041AD30
 * Callers:
 *     _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x1804175A0 (_lambda_2e8c3009fb6c7eb5169b41625b9541b8_--operator().c)
 *     ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180419B20 (-SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800177D0 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::put_IsVisible(
        CActionCenterExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // r9d
  CActionCenterExperienceManager *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 36);
  if ( (v3 == 2) != ((_BYTE)a2 != 0) )
  {
    v4 = (CActionCenterExperienceManager *)((char *)this - 24);
    if ( v3 == 2 )
    {
      LOBYTE(a3) = 1;
      v5 = CActionCenterExperienceManager::Hide(v4, a2, a3);
      if ( v5 < 0 )
      {
        v6 = 454LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = CActionCenterExperienceManager::Show(v4);
      if ( v5 < 0 )
      {
        v6 = 458LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
