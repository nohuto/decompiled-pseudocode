/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C6360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180093404 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18009365C (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800AF298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800B5044 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x180125F68 (-Copy@GameControllerInputInfo@@QEBAPEAU1@XZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801C4884 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C4B5C (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C62F0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801C6654 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  struct GameControllerInputInfo *v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v13; // si
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  MPCHolographicInputManager *v20; // rbx
  int v21; // eax
  unsigned int v22; // ebx
  struct IMPCTarget *v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+B28h]

  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1 )
      return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
    v8 = GameControllerInputInfo::Copy(a2, v4, v5, v6);
    v10 = *(void **)(this + 3664);
    *(_QWORD *)(this + 3664) = v8;
    if ( v10 )
    {
      operator delete(v10);
      v8 = *(struct GameControllerInputInfo **)(this + 3664);
    }
    *(_OWORD *)(this + 3676) = *((_OWORD *)v8 + 3);
    *(_QWORD *)(this + 3692) = *((_QWORD *)v8 + 8);
    *(_DWORD *)(this + 3700) = *((_DWORD *)v8 + 18);
    Instance = MPCGamepadInputHelper::GetInstance((__int64)v10, v9);
    ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
    v13 = ShouldHandleMPCInput;
    if ( *(_BYTE *)(this + 4157) && !ShouldHandleMPCInput )
      MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2, *((_QWORD *)a2 + 4));
    *(_BYTE *)(this + 4157) = v13;
    MPCButtonHoldHelper::UpdateState(
      *(MPCButtonHoldHelper **)(this + 4248),
      *(_BYTE *)(this + 3676) & 1,
      *((_QWORD *)a2 + 2));
    if ( v13 )
    {
      memset_0(v24, 0, 0xBC0uLL);
      v26 = 3008;
      v14 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 0, 0, *((_DWORD *)a2 + 1), (__int64)v24);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
      v24[2] = *((_DWORD *)a2 + 2);
      v25 = *((_QWORD *)a2 + 2);
      v26 = 3008;
      v27 = *((_QWORD *)a2 + 4);
      if ( (*(_BYTE *)(this + 3676) & 4) != 0 )
      {
        v16 = v28;
        if ( (*(_DWORD *)(this + 3672) & 4) == 0 )
          v16 = 2;
        v28 = v16;
      }
      if ( !MPCInputProviderBase::IsPrimary(this) )
      {
        if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v17, v18, v19) )
          MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
      }
      v23[0] = 0LL;
      v20 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
      v21 = MPCHolographicInputManager::Process3DInput(
              v20,
              (struct LegacyInputInfo *)v24,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              v23);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
        return v22;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 3640) + 48LL))(
        *(_QWORD *)(this + 3640),
        *(_QWORD *)(this + 3664));
    }
    *(_DWORD *)(this + 3672) = *(_DWORD *)(this + 3676);
  }
  else if ( *(char *)a2 >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32), a2);
      if ( *((_WORD *)a2 + 30) != 7 )
        (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**(_QWORD **)(this + 3640) + 48LL))(
          *(_QWORD *)(this + 3640),
          a2);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 3640) + 48LL))(*(_QWORD *)(this + 3640));
  }
  return 0LL;
}
