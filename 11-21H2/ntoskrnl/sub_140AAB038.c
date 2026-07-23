/*
 * XREFs of sub_140AAB038 @ 0x140AAB038
 * Callers:
 *     sub_140A4E360 @ 0x140A4E360 (sub_140A4E360.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 */

void sub_140AAB038()
{
  PVOID v0; // rbx

  v0 = qword_140C547D8;
  if ( KeGetCurrentIrql() <= 2u && qword_140C547D8 )
  {
    sub_1403A7C40();
    if ( (dword_140C0DF90 & 1) != 0 )
      sub_140AAB07C(v0);
    sub_1403A7BF0();
  }
}
