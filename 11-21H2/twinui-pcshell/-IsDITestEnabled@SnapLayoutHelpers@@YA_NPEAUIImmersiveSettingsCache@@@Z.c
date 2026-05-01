/*
 * XREFs of ?IsDITestEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180061AA8
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18005FA70 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SnapLayoutHelpers::IsDITestEnabled(SnapLayoutHelpers *this, struct IImmersiveSettingsCache *a2)
{
  int v2; // eax
  char v3; // bl
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int64, int *))(*(_QWORD *)this + 32LL))(this, 12LL, &v7);
  v3 = 0;
  if ( v2 >= 0 )
    return v7 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2B7,
    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
