/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C01B6680
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01B6E50 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00A3070 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0207254 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C0207580 (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C02905D4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C02905D4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
