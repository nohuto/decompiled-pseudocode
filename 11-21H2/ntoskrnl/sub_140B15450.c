/*
 * XREFs of sub_140B15450 @ 0x140B15450
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_140B154A4 @ 0x140B154A4 (sub_140B154A4.c)
 *     sub_140B15550 @ 0x140B15550 (sub_140B15550.c)
 *     sub_140B15B24 @ 0x140B15B24 (sub_140B15B24.c)
 */

__int64 __fastcall sub_140B15450(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // ecx

  sub_140B15B24();
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3600LL);
  sub_140B15550(v2);
  return sub_140B154A4(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
