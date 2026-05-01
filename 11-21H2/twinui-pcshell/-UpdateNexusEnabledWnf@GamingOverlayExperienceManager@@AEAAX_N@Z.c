/*
 * XREFs of ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800E2994
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800E2A70 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180338C10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___--Run.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18033C44C (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateNexusEnabledWnf(GamingOverlayExperienceManager *this, char a2)
{
  char v2; // di
  unsigned int ValueW; // eax
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  BOOL v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 792);
  v10 = 1;
  v9 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"UseNexusForGameBarEnabled",
             0x10u,
             0LL,
             &v10,
             &v9);
  if ( ValueW )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0xFF9,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)ValueW,
      v7);
  else
    *((_BYTE *)this + 792) = v10 != 0;
  if ( a2 || *((_BYTE *)this + 792) != v2 )
  {
    v11 = *((_BYTE *)this + 792) == 0;
    v6 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_NEXUS_INFO, 0LL, &v11, 4LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x1008,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        0);
  }
}
