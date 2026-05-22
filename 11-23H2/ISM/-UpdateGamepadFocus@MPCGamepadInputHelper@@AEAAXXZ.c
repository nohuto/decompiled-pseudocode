/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800A9D58
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800A9BC4 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800B87E0 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800A96F8 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CD770 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  unsigned int v2; // ecx
  bool v3; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  bool v5; // [rsp+98h] [rbp+10h] BYREF
  bool v6; // [rsp+A0h] [rbp+18h] BYREF
  bool v7; // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3664) & 2) != 0
    || *((_BYTE *)this + 1)
    || *((_BYTE *)this + 40)
    || *((_BYTE *)this + 38) )
  {
    v2 = 0;
  }
  else if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365)
         || !*((_BYTE *)this + 39) && (!*(_BYTE *)this || *((_BYTE *)this + 41)) )
  {
    v2 = *((_DWORD *)this + 7);
  }
  else
  {
    v2 = *((_DWORD *)this + 6);
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      (const char *)this);
  if ( !*(_BYTE *)ISMTestMode::s_instance && v2 != *((_DWORD *)this + 8) )
  {
    *((_DWORD *)this + 8) = v2;
    v3 = v2 != 0;
    SetGameControllerMpcFocusOverride(v2);
    v5 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365);
    v6 = (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 916) & 2) != 0;
    v7 = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) == 1;
    ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus<bool &,unsigned long &,bool,bool,bool &,bool,bool &,bool &,bool &,bool &>(
      &v3,
      (unsigned int *)this + 8,
      &v7,
      &v6,
      (bool *)this + 1,
      &v5,
      (bool *)this + 39,
      (bool *)this,
      (bool *)this + 41,
      (bool *)this + 40);
  }
}
