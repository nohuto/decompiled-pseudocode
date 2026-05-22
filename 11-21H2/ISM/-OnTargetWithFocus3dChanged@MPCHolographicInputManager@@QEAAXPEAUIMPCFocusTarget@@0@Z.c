/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18009F488
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800F1BCC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180093404 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180093570 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x18009E7D8 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x18009E874 (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800A5718 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  char v6; // bp
  char v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  MPCCursorManager *v12; // rcx
  ISMTracing *v13; // rcx
  ISMTracing *v14; // rcx
  MPCGamepadInputHelper *Instance; // rax
  struct IMPCFocusTarget *v16; // rdx
  _QWORD *v17; // rsi
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
      if ( ISMTracing::IsEnabled((__int64)v12) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v9,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(v13, (const bool *)this + 3366);
      }
    }
    if ( v7 != *((_BYTE *)this + 3367) )
    {
      *((_BYTE *)this + 3367) = v7;
      if ( ISMTracing::IsEnabled(v9) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v9,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad_(v14, (const bool *)this + 3367);
      }
    }
  }
  Instance = MPCGamepadInputHelper::GetInstance(v9, v8);
  MPCGamepadInputHelper::OnTargetWithFocus3dChanged(Instance, v16, a3);
  v17 = (_QWORD *)*((_QWORD *)this + 414);
  for ( i = (_QWORD *)*((_QWORD *)this + 413); i != v17; ++i )
    (*(void (__fastcall **)(_QWORD, struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)*i + 336LL))(
      *i,
      a2,
      a3);
}
