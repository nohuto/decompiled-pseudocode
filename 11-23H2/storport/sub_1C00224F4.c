/*
 * XREFs of sub_1C00224F4 @ 0x1C00224F4
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C005E1A8 @ 0x1C005E1A8 (sub_1C005E1A8.c)
 */

__int64 __fastcall sub_1C00224F4(__int64 a1, IRP *a2)
{
  unsigned int v4; // esi

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 12LL, &unk_1C0083530, a1, a2);
  }
  if ( *(_DWORD *)(a1 + 48) == 6 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 2) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F074(off_1C0093070->AttachedDevice, 13LL, &unk_1C0083530, a1, a2);
    }
    return sub_1C0003440(a2, 0, 0xC000000E);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
      sub_1C0022DB0(a1);
    if ( (*(_BYTE *)(a1 + 448) & 4) != 0 )
    {
      v4 = sub_1C005E1A8(a1, a2);
      sub_1C000B604(a1, 0);
    }
    else
    {
      v4 = sub_1C0022594(a1, a2);
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 2) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 14LL, &unk_1C0083530, a1, a2, v4);
    }
    return v4;
  }
}
