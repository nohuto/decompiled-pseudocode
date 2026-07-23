/*
 * XREFs of sub_140814C04 @ 0x140814C04
 * Callers:
 *     sub_1403AAEF4 @ 0x1403AAEF4 (sub_1403AAEF4.c)
 *     sub_1409EA2D4 @ 0x1409EA2D4 (sub_1409EA2D4.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 */

void __fastcall sub_140814C04(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    sub_1402AB170(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  sub_1402AB170(0LL, a1, a2, 0, 8u, 0x401802u);
}
