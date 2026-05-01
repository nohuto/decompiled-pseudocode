/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18051434C
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_c424e79de7feaac8ecac58f22ccae09b__void___cdecl(void)_::operator() @ 0x180208F70 (wistd--__function--__func__lambda_c424e79de7feaac8ecac58f22ccae09b__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     wil::details::ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___::_ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___ @ 0x180206A10 (wil--details--ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___--_ScopeExitFn__lambda_e30b.c)
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180525748 (-OnAutoInvokeInDesktopModePolicyChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        KeyboardHosting::TabTipAdapter **this)
{
  const char *v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  _DWORD v8[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x13B7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v2);
  if ( this[73] )
  {
    v8[0] = 1;
    v8[1] = 2;
    v10 = 0LL;
    *(_QWORD *)v6 = &v10;
    v7 = 1;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v8, &v10) >= 0 )
    {
      v3 = KeyboardHosting::TabTipAdapter::OnAutoInvokeInDesktopModePolicyChanged(this[73], *(_DWORD *)(v10 + 16) != 0);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13CA,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        wil::details::ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___::_ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___((__int64 **)v6);
        return v4;
      }
    }
    wil::details::ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___::_ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___((__int64 **)v6);
  }
  return 0LL;
}
