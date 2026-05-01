/*
 * XREFs of wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_6a1e3fb38acb35ade5242a31e2c51efd__void_ @ 0x18022E90C
 * Callers:
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695B50 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_6a1e3fb38acb35ade5242a31e2c51efd__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // xmm1_8

  v2 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 8) = off_1807C9890;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return a1;
}
