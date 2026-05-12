/*
 * XREFs of sub_1C00127A8 @ 0x1C00127A8
 * Callers:
 *     sub_1C0012300 @ 0x1C0012300 (sub_1C0012300.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0013278 @ 0x1C0013278 (sub_1C0013278.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C00127A8(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 23LL, &unk_1C008A080, a1, a2);
  }
  sub_1C00076F4(a1);
  sub_1C0019CFC(a1);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = sub_1C0013278(*(_QWORD *)(a1 + 896), *(_QWORD *)(a1 + 8), a2, 0, (__int64)sub_1C0011820);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 24LL, &unk_1C008A080, a1, a2, v4);
  }
  return 259LL;
}
