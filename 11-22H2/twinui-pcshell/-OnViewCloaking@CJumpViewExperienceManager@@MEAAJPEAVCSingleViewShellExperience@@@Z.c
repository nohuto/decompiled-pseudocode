/*
 * XREFs of ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180448EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801E3C00 (-StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1801E3C78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewCloaking(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  __int64 v4; // r8
  int v5; // edx
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_DWORD *)this + 108);
  v4 = 92LL;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 91LL;
      }
      else
      {
        v4 = 89LL;
      }
    }
    else
    {
      v4 = 90LL;
    }
  }
  else
  {
    v4 = 88LL;
  }
  if ( *((_DWORD *)this + 109) == 3 )
  {
    LODWORD(v4) = v4 | 0x20000000;
    v7 = CExperienceManagerAnimationHelper::Begin(
           (char *)this + 400,
           *((_QWORD *)this + 14),
           v4,
           0LL,
           0LL,
           0LL,
           0LL,
           (char *)this + 460);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x372,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
    CJumpViewExperienceManager::StopMouseHoverHook((CJumpViewExperienceManager *)((char *)this - 64));
  return 0LL;
}
