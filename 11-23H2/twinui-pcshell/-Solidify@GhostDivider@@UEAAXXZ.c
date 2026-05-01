/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x1805E7680
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1805E7640 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x1805E6A7C (-ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z.c)
 */

void __fastcall GhostDivider::Solidify(GhostDivider *this)
{
  *((_BYTE *)this + 92) = 1;
  GhostDivider::ChangeDividerVisibility(this, 1u);
  GhostDivider::DrawGrabber(this);
}
