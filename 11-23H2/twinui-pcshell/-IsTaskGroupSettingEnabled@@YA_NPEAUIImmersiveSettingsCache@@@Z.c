/*
 * XREFs of ?IsTaskGroupSettingEnabled@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180070B08
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall IsTaskGroupSettingEnabled(struct IImmersiveSettingsCache *a1)
{
  __int64 v1; // rax
  char v2; // bl
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvParam; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 1;
  v8 = 1;
  v3 = (*(__int64 (__fastcall **)(struct IImmersiveSettingsCache *, __int64, int *))(v1 + 32))(a1, 10LL, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v3,
      v5);
  pvParam = 0;
  SystemParametersInfoW(0x82u, 0, &pvParam, 0);
  if ( !pvParam || !v8 )
    return 0;
  return v2;
}
