/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180093704
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180093570 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800A1128 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x180093194 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800B472C (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  const char *v2; // r9
  unsigned int v3; // ecx
  bool v4; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  bool v6; // [rsp+78h] [rbp+10h] BYREF
  bool v7; // [rsp+80h] [rbp+18h] BYREF
  bool v8; // [rsp+88h] [rbp+20h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3664) & 2) != 0
    || *((_BYTE *)this + 1)
    || *((_BYTE *)this + 40)
    || *((_BYTE *)this + 38) )
  {
    v3 = 0;
  }
  else if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365)
         || !*((_BYTE *)this + 39) && (!*(_BYTE *)this || *((_BYTE *)this + 41)) )
  {
    v3 = *((_DWORD *)this + 7);
  }
  else
  {
    v3 = *((_DWORD *)this + 6);
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v2);
  if ( !*(_BYTE *)ISMTestMode::s_instance && v3 != *((_DWORD *)this + 8) )
  {
    *((_DWORD *)this + 8) = v3;
    v4 = v3 != 0;
    SetGameControllerMpcFocusOverride(v3);
    v6 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365);
    v7 = (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 916) & 2) != 0;
    v8 = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) == 1;
    ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus<bool &,unsigned long &,bool,bool,bool &,bool,bool &,bool &,bool &,bool &>(
      &v4,
      (unsigned int *)this + 8,
      &v8,
      &v7,
      (bool *)this + 1,
      &v6,
      (bool *)this + 39,
      (bool *)this,
      (bool *)this + 41,
      (bool *)this + 40);
  }
}
