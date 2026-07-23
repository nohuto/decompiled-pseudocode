/*
 * XREFs of sub_14083F5DC @ 0x14083F5DC
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 *     sub_14083F704 @ 0x14083F704 (sub_14083F704.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_14083F5DC()
{
  if ( qword_140C16E50 )
  {
    ExFreePoolWithTag(qword_140C16E50, 0);
    qword_140C16E50 = 0LL;
  }
}
