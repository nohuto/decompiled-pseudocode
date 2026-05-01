/*
 * XREFs of ?OnViewCloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewCloaking(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 92LL;
  v3 = *((_DWORD *)this + 94);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          v2 = 91LL;
      }
      else
      {
        v2 = 89LL;
      }
    }
    else
    {
      v2 = 90LL;
    }
  }
  else
  {
    v2 = 88LL;
  }
  LODWORD(v2) = v2 | 0x20000000;
  v6 = CExperienceManagerAnimationHelper::Begin(
         (char *)this + 80,
         *((_QWORD *)this + 19),
         v2,
         0LL,
         0LL,
         0LL,
         0LL,
         (char *)this + 336);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x222,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}
