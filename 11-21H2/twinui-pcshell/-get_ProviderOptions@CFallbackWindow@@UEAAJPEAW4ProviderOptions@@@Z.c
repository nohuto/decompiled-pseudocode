/*
 * XREFs of ?get_ProviderOptions@CFallbackWindow@@UEAAJPEAW4ProviderOptions@@@Z @ 0x180181FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFallbackWindow::get_ProviderOptions(CFallbackWindow *this, enum ProviderOptions *a2)
{
  *a2 = ProviderOptions_UseComThreading|ProviderOptions_ServerSideProvider;
  return 0LL;
}
