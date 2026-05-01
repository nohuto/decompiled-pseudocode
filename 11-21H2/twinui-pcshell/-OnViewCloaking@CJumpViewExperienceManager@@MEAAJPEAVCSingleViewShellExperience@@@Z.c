/*
 * XREFs of ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373230
 * Callers:
 *     <none>
 * Callees:
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18000D22C (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1805F2C54 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1805F2C54.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewCloaking(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_DWORD *)this + 108);
  v4 = 92;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 91;
      }
      else
      {
        v4 = 89;
      }
    }
    else
    {
      v4 = 90;
    }
  }
  else
  {
    v4 = 88;
  }
  if ( *((_DWORD *)this + 109) == 3 && !ReducedVisualEffects() )
  {
    v7 = CExperienceManagerAnimationHelper::Begin(
           (char *)this + 400,
           *((_QWORD *)this + 14),
           v4 | 0x200000u,
           0LL,
           0LL,
           0LL,
           0LL,
           (char *)this + 448);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  return 0LL;
}
