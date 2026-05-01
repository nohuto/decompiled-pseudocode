/*
 * XREFs of ?GetTrustLevel@BrokeredViewTabConverterStatics@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F9690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BrokeredViewTabConverterStatics::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 40), a2);
}
