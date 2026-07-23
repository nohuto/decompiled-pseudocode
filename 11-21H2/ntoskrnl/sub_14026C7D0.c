/*
 * XREFs of sub_14026C7D0 @ 0x14026C7D0
 * Callers:
 *     sub_14022689C @ 0x14022689C (sub_14022689C.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14026C7D0(ULONG64 a1)
{
  return qword_140C53088 && a1 >= qword_140C53088 && a1 < qword_140C53088 + (BitMapHeader.SizeOfBitMap << 30);
}
