/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18016468C
 * Callers:
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     _lambda_0e377e64aae41d271781dea56205f73a_::_lambda_0e377e64aae41d271781dea56205f73a_ @ 0x1801FE2B0 (_lambda_0e377e64aae41d271781dea56205f73a_--_lambda_0e377e64aae41d271781dea56205f73a_.c)
 *     wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::__clone @ 0x180201500 (wistd--__function--__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(en_ea_180201500.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1806DE264 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 116), a2);
  return result;
}
