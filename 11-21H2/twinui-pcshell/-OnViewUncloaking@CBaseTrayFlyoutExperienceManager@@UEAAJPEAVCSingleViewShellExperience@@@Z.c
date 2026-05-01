/*
 * XREFs of ?OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395F80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x1803968EC (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1805F2C54 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1805F2C54.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewUncloaking(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  __int64 v4; // r8
  int v5; // edx
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_DWORD *)this + 80);
  v4 = 81LL;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 79LL;
      }
      else
      {
        v4 = 77LL;
      }
    }
    else
    {
      v4 = 80LL;
    }
  }
  else
  {
    v4 = 78LL;
  }
  LODWORD(v4) = v4 | 0x200000;
  v7 = CExperienceManagerAnimationHelper::Begin(
         (char *)this + 256,
         *((_QWORD *)this + 6),
         v4,
         0LL,
         0LL,
         0LL,
         0LL,
         (char *)this + 360);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v7);
  CBaseTrayFlyoutExperienceManager::SetBorderAccent((CBaseTrayFlyoutExperienceManager *)((char *)this - 48), 1);
  return 0LL;
}
