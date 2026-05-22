/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E4F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800A99EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800A9CB0 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C8298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800CDE1C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x1801405CC (-Copy@GameControllerInputInfo@@QEBAPEAU1@XZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801E3414 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801E36F4 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E4F20 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801E5284 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
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
  __int64 v11; // rax
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v14; // si
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  MPCHolographicInputManager *v21; // rbx
  int v22; // eax
  unsigned int v23; // ebx
  struct IMPCTarget *v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+B28h]

  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1 )
      return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
    v8 = GameControllerInputInfo::Copy(a2, v4, v5, v6);
    v10 = *(void **)(this + 3664);
    *(_QWORD *)(this + 3664) = v8;
    if ( v10 )
      operator delete(v10);
    v11 = *(_QWORD *)(this + 3664);
    *(_OWORD *)(this + 3676) = *(_OWORD *)(v11 + 48);
    *(_QWORD *)(this + 3692) = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(this + 3700) = *(_DWORD *)(v11 + 72);
    Instance = MPCGamepadInputHelper::GetInstance((__int64)v10, v9);
    ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
    v14 = ShouldHandleMPCInput;
    if ( *(_BYTE *)(this + 4157) && !ShouldHandleMPCInput )
      MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2, *((_QWORD *)a2 + 4));
    *(_BYTE *)(this + 4157) = v14;
    MPCButtonHoldHelper::UpdateState(
      *(MPCButtonHoldHelper **)(this + 4248),
      *(_BYTE *)(this + 3676) & 1,
      *((_QWORD *)a2 + 2));
    if ( v14 )
    {
      memset_0(v25, 0, 0xBC0uLL);
      v27 = 3008;
      v15 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 0, 0, *((_DWORD *)a2 + 1), (__int64)v25);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
      v25[2] = *((_DWORD *)a2 + 2);
      v26 = *((_QWORD *)a2 + 2);
      v27 = 3008;
      v28 = *((_QWORD *)a2 + 4);
      if ( (*(_BYTE *)(this + 3676) & 4) != 0 )
      {
        v17 = v29;
        if ( (*(_DWORD *)(this + 3672) & 4) == 0 )
          v17 = 2;
        v29 = v17;
      }
      if ( !MPCInputProviderBase::IsPrimary(this) )
      {
        if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v18, v19, v20) )
          MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
      }
      v24[0] = 0LL;
      v21 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v24);
      v22 = MPCHolographicInputManager::Process3DInput(
              v21,
              (struct LegacyInputInfo *)v25,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              v24);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v24);
        return v23;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v24);
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
