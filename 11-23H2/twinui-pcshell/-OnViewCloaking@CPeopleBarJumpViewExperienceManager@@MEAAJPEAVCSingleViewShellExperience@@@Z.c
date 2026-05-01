/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180441090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180440E48 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        const RECT *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // ebx
  LONG top; // ecx
  int v5; // ecx
  int v6; // ecx
  int MonitorWorkArea; // eax
  __int64 v8; // rdx
  struct tagRECT v10; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 92;
  top = this[16].top;
  if ( top )
  {
    v5 = top - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v3 = 91;
      }
      else
      {
        v3 = 89;
      }
    }
    else
    {
      v3 = 90;
    }
  }
  else
  {
    v3 = 88;
  }
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(this - 3, &v10);
  if ( MonitorWorkArea < 0 )
  {
    v8 = 247LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                      &this[22],
                      *(_QWORD *)&this[2].left,
                      v3 | 0x200000u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &v10);
  if ( MonitorWorkArea < 0 )
  {
    v8 = 250LL;
    goto LABEL_13;
  }
  return 0LL;
}
