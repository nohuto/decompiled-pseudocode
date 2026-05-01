/*
 * XREFs of ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x1806DFA80
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE1D4 (-_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

char __fastcall CLauncherTipContextMenu::_IsInImmersiveAppOrLauncher(CLauncherTipContextMenu *this)
{
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( CLauncherTipContextMenu::_EnsureImmersiveModeCheck(this) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), &v4) >= 0 )
  {
    if ( v4 )
    {
      return 1;
    }
    else if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), &v5) >= 0 )
    {
      return v5 == 1;
    }
  }
  return v2;
}
