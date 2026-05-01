/*
 * XREFs of wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_d9ee850dfd4f14a339c5644d7c64dad2__void_ @ 0x1801C15D4
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18003091C (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_d9ee850dfd4f14a339c5644d7c64dad2__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // xmm1_8

  v2 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 8) = off_1806458C0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return a1;
}
