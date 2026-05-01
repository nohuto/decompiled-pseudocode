/*
 * XREFs of ?AddRef@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ @ 0x1801F1A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::AddRef(__int64 a1)
{
  return CViewPositionChangedEventArgs::AddRef((CViewPositionChangedEventArgs *)(a1 - 16));
}
