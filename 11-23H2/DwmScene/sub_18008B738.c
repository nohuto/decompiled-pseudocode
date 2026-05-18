/*
 * XREFs of sub_18008B738 @ 0x18008B738
 * Callers:
 *     sub_180052D00 @ 0x180052D00 (sub_180052D00.c)
 * Callees:
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 */

__int64 __fastcall sub_18008B738(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  sub_18001E730((__int64)(a1 + 15));
  return sub_18009BCA0(a1);
}
