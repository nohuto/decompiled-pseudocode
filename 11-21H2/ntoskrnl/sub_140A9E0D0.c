/*
 * XREFs of sub_140A9E0D0 @ 0x140A9E0D0
 * Callers:
 *     sub_140601DB0 @ 0x140601DB0 (sub_140601DB0.c)
 * Callees:
 *     sub_14063A5D8 @ 0x14063A5D8 (sub_14063A5D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 */

void sub_140A9E0D0()
{
  sub_14063A5D8(16);
  if ( (dword_140C1AA7C & 0x1000) != 0 )
    sub_140A9DB60();
  if ( qword_140D575A8 )
  {
    ExFreePoolWithTag(qword_140D575A8, 0x6E496956u);
    qword_140D575A8 = 0LL;
  }
  dword_140D57518 = 0;
  dword_140D5760C = 0;
}
