/*
 * XREFs of sub_140A7C548 @ 0x140A7C548
 * Callers:
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     sub_1405FE024 @ 0x1405FE024 (sub_1405FE024.c)
 */

void sub_140A7C548()
{
  if ( (qword_140D01450 & 0x20000) != 0
    || (qword_140D01450 & 1) != 0
    || (qword_140D01450 & 8) != 0
    || (qword_140D01450 & 0x100) != 0
    || (qword_140D01450 & 0x800) != 0
    || (qword_140D01450 & 0x10) != 0 )
  {
    sub_1405FE024();
  }
}
