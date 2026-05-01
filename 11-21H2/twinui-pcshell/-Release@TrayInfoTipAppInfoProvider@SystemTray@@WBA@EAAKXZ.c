/*
 * XREFs of ?Release@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ @ 0x1801F8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::Release(__int64 a1)
{
  return wil::details::EventInvocationContextProvider<1>::Release(a1 - 16);
}
