/*
 * XREFs of ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111E40
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7E50 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1801102F0 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(
        SnapLayoutHelpers *this,
        struct IImmersiveSettingsCache *a2)
{
  int v2; // eax
  char v3; // bl
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int64, int *))(*(_QWORD *)this + 32LL))(this, 11LL, &v7);
  v3 = 0;
  if ( v2 >= 0 )
    return v7 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2DF,
    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
