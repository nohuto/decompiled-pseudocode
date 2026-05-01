/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1805E7640
 * Callers:
 *     <none>
 * Callees:
 *     ?GhostDividerShown@JointResizeTelemetry@@SAXXZ @ 0x1805E6DFC (-GhostDividerShown@JointResizeTelemetry@@SAXXZ.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1805E7680 (-Solidify@GhostDivider@@UEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2)
{
  JointResizeTelemetry::GhostDividerShown((__int64)a1);
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  return 0LL;
}
