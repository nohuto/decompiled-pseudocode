/*
 * XREFs of ??R_lambda_a12e806a0fd69726e8b76ba9540bf820_@@QEBA@AEBUIAppExtensionStatics@StateRepository@Internal@Windows@winrt@@@Z @ 0x180261470
 * Callers:
 *     ??$call@AEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@?$factory_cache_entry@UAppExtension@StateRepository@Internal@Windows@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@Z @ 0x18025DFE0 (--$call@AEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@-$factory_cache_entry@UAppExtension@Stat.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall _lambda_a12e806a0fd69726e8b76ba9540bf820_::operator()(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // r11
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)a1[1];
  v5 = (_QWORD *)*a1;
  v6 = *a3;
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v6 + 144LL))(v6, *v5, *v3, &v9);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a2 = v9;
  return a2;
}
