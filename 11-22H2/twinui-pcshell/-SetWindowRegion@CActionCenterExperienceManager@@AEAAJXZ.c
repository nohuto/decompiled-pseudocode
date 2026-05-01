/*
 * XREFs of ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019FD4
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180017C14 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019278 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_971feb14f22b89bbdba5f37e4038afc3___ @ 0x1801DBBDC (Windows--Internal--ComTaskPool--QueueTask__lambda_971feb14f22b89bbdba5f37e4038afc3___.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetWindowRegion(
        CActionCenterExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( *((float *)this + 178) <= 0.0 || *((float *)this + 179) <= 0.0 )
    return 0LL;
  v6 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 19), v4);
  v7 = *((_OWORD *)this + 44);
  v8 = *((unsigned int *)this + 182);
  *(_QWORD *)v13 = v6;
  v14 = v7;
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_971feb14f22b89bbdba5f37e4038afc3___(v10, v9, v8, v13);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v13[0]);
  return v12;
}
