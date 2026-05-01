/*
 * XREFs of _lambda_c705fc392f238fdd99026eb26c6a90d7_::operator() @ 0x18037CB9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c705fc392f238fdd99026eb26c6a90d7__&_::Run @ 0x18037EFE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c705fc392f238fdd99026eb26c6a90d7__-_--Run.c)
 * Callees:
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18000D22C (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F1334 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1805F2DD0 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c705fc392f238fdd99026eb26c6a90d7_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  char v3; // si
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  v3 = 1;
  if ( !ReducedVisualEffects() )
  {
    v4 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*a1 + 728));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x276,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*a1 + 64));
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v3 )
    *(_DWORD *)(v2 + 760) = 0;
  return v6;
}
