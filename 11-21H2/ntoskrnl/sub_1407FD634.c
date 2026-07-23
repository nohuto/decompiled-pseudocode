/*
 * XREFs of sub_1407FD634 @ 0x1407FD634
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140B05D00 @ 0x140B05D00 (sub_140B05D00.c)
 * Callees:
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 */

__int64 sub_1407FD634()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)sub_1407FD674(&qword_140C52A10[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
