/*
 * XREFs of _lambda_0e377e64aae41d271781dea56205f73a_::_lambda_0e377e64aae41d271781dea56205f73a_ @ 0x1801FE2B0
 * Callers:
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18016468C (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_0e377e64aae41d271781dea56205f73a_::_lambda_0e377e64aae41d271781dea56205f73a_(
        volatile int **a1,
        volatile int *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9

  v3 = *a3;
  *a1 = a2;
  v4 = (__int64 *)(a1 + 1);
  *v4 = v3;
  Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(v4, a2);
  return v5;
}
