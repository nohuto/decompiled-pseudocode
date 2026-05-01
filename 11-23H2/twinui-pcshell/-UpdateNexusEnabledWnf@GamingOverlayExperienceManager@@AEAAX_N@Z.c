/*
 * XREFs of ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800A4148
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180406890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___--Run.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1803DC8C0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateNexusEnabledWnf(GamingOverlayExperienceManager *this, char a2)
{
  char v2; // di
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  BOOL v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 832);
  v8 = 1;
  v7 = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"UseNexusForGameBarEnabled",
          0x10u,
          0LL,
          &v8,
          &v7) )
    *((_BYTE *)this + 832) = v8 != 0;
  if ( a2 || *((_BYTE *)this + 832) != v2 )
  {
    v9 = *((_BYTE *)this + 832) == 0;
    v5 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_NEXUS_INFO, 0LL, &v9, 4LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x10C5,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        0);
  }
}
