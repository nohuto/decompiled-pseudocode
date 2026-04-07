/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180038038 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?get_AnimationsEnabled@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180044820 (-get_AnimationsEnabled@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITrans.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800FF7F0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?CanShowNewWindowTransition@CDesktopManager@@SA_NXZ @ 0x180037E84 (-CanShowNewWindowTransition@CDesktopManager@@SA_NXZ.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180037EA0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?IsInLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x180037F2C (-IsInLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // bl
  struct CWindowData *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax

  v2 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl) == 0;
  v3 = *((_QWORD *)this + 42);
  if ( !v2 && !v3 )
    return 0;
  if ( (*(_BYTE *)(v3 + 664) & 0x30) != 0 )
    return 0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v4 = *((_QWORD *)this + 42);
  if ( (*(_DWORD *)(v4 + 116) & 0xC00000) != 0xC00000 && (*(_BYTE *)(v4 + 668) & 0x40) == 0 )
    return 0;
  if ( *(char *)(v4 + 120) < 0 )
    return 0;
  v5 = 1;
  if ( (*(_BYTE *)(v4 + 664) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v4 + 668) & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v4 + 408) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    return 0;
  if ( !CDesktopManager::CanShowNewWindowTransition() )
  {
    v8 = *((_QWORD *)this + 46);
    if ( !v8 || *(_BYTE *)(v8 + 72) )
      return 0;
  }
  if ( CLivePreview::IsInLivePreview(*(CLivePreview **)(v7 + 440), v6)
    || !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
  {
    return 0;
  }
  return v5;
}
