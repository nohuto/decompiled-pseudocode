/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C00A30C0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00A2650 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C014E684 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0206BD0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0207894 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C02905C4 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C02905C8, xxxAccessTimeOutTimer);
}
