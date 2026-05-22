/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B6D28
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18010B01C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800A99EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800A9BC4 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ??$MPCHolographicInputManager_FocusedAppDisabled3DGamepad@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800B2DC0 (--$MPCHolographicInputManager_FocusedAppDisabled3DGamepad@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 *     ??$MPCHolographicInputManager_FocusedAppDisabled3DMouse@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800B2E70 (--$MPCHolographicInputManager_FocusedAppDisabled3DMouse@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BD604 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  char v6; // r14
  char v7; // bp
  __int64 v8; // rdx
  bool *v9; // rcx
  int v10; // eax
  int v11; // eax
  MPCCursorManager *v12; // rcx
  MPCGamepadInputHelper *Instance; // rax
  struct IMPCFocusTarget *v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *i; // rdi

  v6 = 0;
  v7 = 0;
  if ( !IsEdition(1024LL) )
  {
    if ( a3 && (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3) )
    {
      v10 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v6 = GetPropW((HWND)v10, L"Windows.UI.Input.Spatial.DisableMouseRouting") != 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v7 = GetPropW((HWND)v11, L"Windows.UI.Input.Spatial.Disable3DFocusGamepadRouting") != 0LL;
    }
    if ( v6 != *((_BYTE *)this + 3366) )
    {
      v12 = (MPCCursorManager *)*((_QWORD *)this + 423);
      *((_BYTE *)this + 3366) = v6;
      if ( v12 )
        MPCCursorManager::UpdateState(v12);
      ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse<bool &>((const bool *)this + 3366);
    }
    v9 = (bool *)this + 3367;
    if ( v7 != *((_BYTE *)this + 3367) )
    {
      *v9 = v7;
      ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad<bool &>(v9);
    }
  }
  Instance = MPCGamepadInputHelper::GetInstance((__int64)v9, v8);
  MPCGamepadInputHelper::OnTargetWithFocus3dChanged(Instance, v14, a3);
  v15 = (_QWORD *)*((_QWORD *)this + 414);
  for ( i = (_QWORD *)*((_QWORD *)this + 413); i != v15; ++i )
    (*(void (__fastcall **)(_QWORD, struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)*i + 336LL))(
      *i,
      a2,
      a3);
}
