/*
 * XREFs of ?Release@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ @ 0x18029C530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::Release(__int64 a1)
{
  return wil::details::EventInvocationContextProvider<1>::Release(a1 - 16);
}
