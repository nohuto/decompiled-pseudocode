/*
 * XREFs of sub_1405B3FA4 @ 0x1405B3FA4
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 */

_BOOL8 __fastcall sub_1405B3FA4(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl
  char v3; // dl
  char v4; // al

  v2 = sub_140326870(BugCheckParameter2, 4);
  sub_14033FAA4(BugCheckParameter2, 0);
  v3 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xFD;
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  v3 |= 5u;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_BYTE *)(BugCheckParameter2 + 34) = v3;
  *(_BYTE *)(BugCheckParameter2 + 34) = v3 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
  sub_1402E89B0((unsigned __int64 *)(BugCheckParameter2 + 16));
  *(_QWORD *)BugCheckParameter2 = 0LL;
  return (v2 & 3) == 0;
}
