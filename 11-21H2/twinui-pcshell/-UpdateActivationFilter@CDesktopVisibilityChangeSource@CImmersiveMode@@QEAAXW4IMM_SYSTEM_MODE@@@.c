/*
 * XREFs of ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180074288
 * Callers:
 *     ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800737B0 (-_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1800B7B50 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x1800B8018 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x18013A850 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ldddd @ 0x1802EF8A0 (WPP_SF_ldddd.c)
 */

int __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(__int64 a1, int a2)
{
  unsigned __int8 v2; // r8
  PSRWLOCK v4; // rax
  unsigned int v5; // edi
  int result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagRECT Rect; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 && (!*(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) || *(_BYTE *)(a1 + 14)) )
    v2 = 1;
  if ( v2 != *(_BYTE *)(a1 + 15) )
  {
    v4 = CApplicationManagerUtility::g_pIAMGlobals;
    *(_BYTE *)(a1 + 15) = v2;
    v5 = v2;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v4[16].Ptr + 48LL))(v4[16].Ptr, *(_QWORD *)(a1 + 16), v2);
    result = (int)WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      result = GetWindowRect(*(HWND *)(a1 + 16), &Rect);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        return WPP_SF_ldddd(
                 *((_QWORD *)WPP_GLOBAL_Control + 2),
                 v7,
                 v8,
                 v5,
                 Rect.left,
                 Rect.top,
                 Rect.right,
                 Rect.bottom);
    }
  }
  return result;
}
