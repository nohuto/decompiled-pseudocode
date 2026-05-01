/*
 * XREFs of ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180673D98
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x180675E58 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SnapLayoutHelpers::IsSmartFillSettingEnabled(
        SnapLayoutHelpers *this,
        struct IImmersiveSettingsCache *a2)
{
  int v2; // eax
  char v3; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int64, int *))(*(_QWORD *)this + 32LL))(this, 4LL, &v6);
  v3 = 0;
  if ( v2 >= 0 )
    return v6 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2D3,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
