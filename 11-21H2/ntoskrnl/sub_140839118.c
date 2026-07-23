/*
 * XREFs of sub_140839118 @ 0x140839118
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_14083A794 @ 0x14083A794 (sub_14083A794.c)
 */

__int64 __fastcall sub_140839118(__int64 a1, int a2)
{
  qword_140C458F8 = (__int64)sub_1407F4EA0;
  qword_140C45900 = (__int64)sub_1407F4EF0;
  qword_140C45908 = (__int64)sub_1407F4F40;
  qword_140C45910 = (__int64)sub_1407F4F30;
  return sub_14083A794((unsigned int)&unk_140C45880, a2, 2, (unsigned int)L"RootIRQ");
}
