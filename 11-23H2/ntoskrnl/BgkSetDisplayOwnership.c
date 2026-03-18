/*
 * XREFs of BgkSetDisplayOwnership @ 0x1403ADB60
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADB80 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(__int64 a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
