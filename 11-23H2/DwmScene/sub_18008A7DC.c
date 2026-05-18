/*
 * XREFs of sub_18008A7DC @ 0x18008A7DC
 * Callers:
 *     sub_1800D467C @ 0x1800D467C (sub_1800D467C.c)
 *     sub_1800D550C @ 0x1800D550C (sub_1800D550C.c)
 *     sub_1800D73D0 @ 0x1800D73D0 (sub_1800D73D0.c)
 *     sub_1800D767C @ 0x1800D767C (sub_1800D767C.c)
 *     sub_1800D7920 @ 0x1800D7920 (sub_1800D7920.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

__int64 __fastcall sub_18008A7DC(__int64 a1)
{
  sub_1800291A0(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
