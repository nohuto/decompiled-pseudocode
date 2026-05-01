/*
 * XREFs of ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18003F580
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x18003CBEC (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  if ( (v2 != 0) != *(_BYTE *)(a1 + 404) )
  {
    *(_BYTE *)(a1 + 404) = v2 != 0;
    if ( v2 )
    {
      v10 = 0;
      v4 = *(_QWORD *)(a1 + 432);
      if ( !v4 )
        goto LABEL_14;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 32LL))(v4, 5LL, &v10);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1F4,
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
              (void *)0x1FD,
              (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v7,
              v8);
        }
      }
    }
  }
  return 0LL;
}
