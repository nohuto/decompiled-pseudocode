/*
 * XREFs of sub_14025E878 @ 0x14025E878
 * Callers:
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 * Callees:
 *     <none>
 */

void sub_14025E878()
{
  _InterlockedOr(&dword_140D06D60, 1u);
  _InterlockedAnd(&dword_140D0689C, 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)&dword_140D06A28, 0xFFFFFFFE);
}
