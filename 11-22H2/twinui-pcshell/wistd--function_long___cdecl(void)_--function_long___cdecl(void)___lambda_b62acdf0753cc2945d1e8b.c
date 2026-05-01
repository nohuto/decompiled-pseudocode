/*
 * XREFs of wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_b62acdf0753cc2945d1e8ba0bbb915a5__void_ @ 0x18022EAE8
 * Callers:
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695810 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_b62acdf0753cc2945d1e8ba0bbb915a5__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // xmm1_8

  v2 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 8) = off_1807C98B8;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return a1;
}
