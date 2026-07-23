/*
 * XREFs of sub_140552EE8 @ 0x140552EE8
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 * Callees:
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 */

void sub_140552EE8()
{
  int v0; // eax

  if ( qword_140D00A80 )
  {
    v0 = *(_DWORD *)(qword_140D00A80 + 1404);
    if ( (v0 & 0x860000) == 0 )
      *(_DWORD *)(qword_140D00A80 + 1404) = v0 & 0xFFFFFE00 | 0x25;
    *(_DWORD *)(qword_140D00A80 + 1404) |= 0x800u;
    sub_140553164();
  }
}
