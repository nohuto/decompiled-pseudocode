/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045D1B0
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180462760 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5bca6f87553ee4a307de3070de971dc8___ @ 0x1801AEAE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_5bca6f87553ee4a307de3070de971dc8___.c)
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::_lambda_5bca6f87553ee4a307de3070de971dc8_ @ 0x1801AF17C (_lambda_5bca6f87553ee4a307de3070de971dc8_--_lambda_5bca6f87553ee4a307de3070de971dc8_.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@QEAA@XZ @ 0x1801AF420 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4JavaOption@@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  int v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-60h] BYREF
  void *v12[5]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown((__int64)this, a2) )
    return 2147943041LL;
  if ( *((_BYTE *)this + 1205) )
    return 2147943540LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((__int64)this, (__int64)v11);
  *(_QWORD *)v10 = this;
  v6 = lambda_5bca6f87553ee4a307de3070de971dc8_::_lambda_5bca6f87553ee4a307de3070de971dc8_(
         (__int64)v12,
         (__int64)v11,
         v10);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_5bca6f87553ee4a307de3070de971dc8___(
         v8,
         v7,
         *((_DWORD *)this + 293),
         v6);
  std::pair<std::wstring const,enum JavaOption>::~pair<std::wstring const,enum JavaOption>(v12);
  if ( v9 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10AF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  std::wstring::_Tidy_deallocate((__int64)v11);
  return (unsigned int)v9;
}
