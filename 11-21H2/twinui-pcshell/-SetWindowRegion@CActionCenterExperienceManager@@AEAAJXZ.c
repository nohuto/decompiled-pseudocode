/*
 * XREFs of ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x18003DBE8
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004A334 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004DD9C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_574b9ee63444c44a46a862f04548e180___ @ 0x180191828 (Windows--Internal--ComTaskPool--QueueTask__lambda_574b9ee63444c44a46a862f04548e180___.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetWindowRegion(CActionCenterExperienceManager *this, __int64 a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  HWND v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2);
  if ( *((float *)this + 176) <= 0.0 || *((float *)this + 177) <= 0.0 )
    return 0LL;
  v4 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 19), v3);
  v5 = *(_OWORD *)((char *)this + 696);
  v6 = *((unsigned int *)this + 180);
  *(_QWORD *)v12 = v4;
  v13 = v5;
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_574b9ee63444c44a46a862f04548e180___(v8, v7, v6, v12);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x630,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v12[0]);
  return v10;
}
