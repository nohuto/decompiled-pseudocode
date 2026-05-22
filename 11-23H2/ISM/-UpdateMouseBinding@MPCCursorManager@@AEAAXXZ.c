/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BD4F4
 * Callers:
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BD604 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z @ 0x1800BCA2C (--$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  _BYTE *v3; // rdi
  char v4; // bl
  bool v5; // dl
  bool v6; // zf
  char v7; // al
  const char *v8; // r9
  unsigned __int8 v9; // dl
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v3 = (char *)this + 66;
  v4 = *((_BYTE *)this + 66);
  v5 = (*((_BYTE *)Instance + 3664) & 1) == 0;
  v6 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v5;
  if ( v6 || !v5 )
  {
    v7 = v4;
    if ( v4 )
    {
      if ( !(unsigned int)NtMITDisableMouseIntercept() )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x140,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
      *v3 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = v4;
    if ( !v4 )
    {
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x13A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v8);
      *v3 = 1;
      v7 = 1;
    }
  }
  if ( v4 != v7 )
LABEL_8:
    ISMTracing::MPCCursorManager_MouseInterceptUpdate<bool &,bool &,bool &>(
      (const bool *)this + 66,
      (const bool *)this + 56,
      (const bool *)this + 65);
  *((_DWORD *)this + 8) = 0;
  v9 = *v3 == 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  MPCCursorManager::UpdateCursorVisibility(this, v9, 1u, 1);
}
