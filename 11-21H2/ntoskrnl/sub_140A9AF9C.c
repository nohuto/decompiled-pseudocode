/*
 * XREFs of sub_140A9AF9C @ 0x140A9AF9C
 * Callers:
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 *     sub_140AA4854 @ 0x140AA4854 (sub_140AA4854.c)
 * Callees:
 *     sub_14063A5D8 @ 0x14063A5D8 (sub_14063A5D8.c)
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 */

void sub_140A9AF9C()
{
  int v0; // ecx

  v0 = (qword_140D01450 & 0x400000) == 0 ? 0x206 : 0;
  if ( (dword_140C29FC0 & 0x800) != 0 )
    sub_14063B338(v0);
  else
    sub_14063A5D8(v0);
}
