/*
 * XREFs of sub_1C00A8288 @ 0x1C00A8288
 * Callers:
 *     sub_1C0004D60 @ 0x1C0004D60 (sub_1C0004D60.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C00A8288(__int64 a1, IRP *a2)
{
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 3u )
  {
    sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x1Fu, (__int64)&unk_1C0083210, a1, a2);
  }
  return sub_1C0003440(a2, 0, 0xC0000001);
}
