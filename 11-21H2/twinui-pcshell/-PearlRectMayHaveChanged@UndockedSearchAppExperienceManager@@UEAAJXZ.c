/*
 * XREFs of ?PearlRectMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180044A30
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::PearlRectMayHaveChanged(
        UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
    return 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
          *((_QWORD *)this + 12),
          *((_QWORD *)this + 8)) )
    return 0LL;
  v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DA,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
