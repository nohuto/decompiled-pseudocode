/*
 * XREFs of ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18006D890
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800808D4 (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 & 2;
  if ( (v2 != 0) != *(_BYTE *)(a1 + 412) )
  {
    *(_BYTE *)(a1 + 412) = v2 != 0;
    if ( v2 )
    {
      v10 = 0;
      v4 = *(_QWORD *)(a1 + 440);
      if ( !v4 )
        goto LABEL_14;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 32LL))(v4, 5LL, &v10);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x209,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5,
          v8);
      if ( v10 )
      {
        CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)(a1 - 56));
      }
      else
      {
LABEL_14:
        if ( *(_DWORD *)(a1 + 112) == 2 )
        {
          v7 = CSingleViewShellExperience::Hide(a1 + 72, 0LL);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x212,
              (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v7,
              v8);
        }
      }
    }
  }
  return 0LL;
}
