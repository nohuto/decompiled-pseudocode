/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c5531eb30e442e1349f82459eb3a7316_@@CA@AEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z @ 0x1806FE5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall _lambda_c5531eb30e442e1349f82459eb3a7316_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Gaming::UI::IGameBarStatics *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
