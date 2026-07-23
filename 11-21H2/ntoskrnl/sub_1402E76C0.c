/*
 * XREFs of sub_1402E76C0 @ 0x1402E76C0
 * Callers:
 *     sub_140232BE4 @ 0x140232BE4 (sub_140232BE4.c)
 *     sub_14025A2B4 @ 0x14025A2B4 (sub_14025A2B4.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E7400 @ 0x1402E7400 (sub_1402E7400.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14037E1B8 @ 0x14037E1B8 (sub_14037E1B8.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14045D34E @ 0x14045D34E (sub_14045D34E.c)
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1405A4940 @ 0x1405A4940 (sub_1405A4940.c)
 *     sub_1405A6840 @ 0x1405A6840 (sub_1405A6840.c)
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 *     sub_14096F470 @ 0x14096F470 (sub_14096F470.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_1402E76C0(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = sub_140317A10(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C50780;
  }
  return HIDWORD(v1);
}
