/*
 * XREFs of sub_1C00739F0 @ 0x1C00739F0
 * Callers:
 *     sub_1C006C9B0 @ 0x1C006C9B0 (sub_1C006C9B0.c)
 *     sub_1C00AC0D4 @ 0x1C00AC0D4 (sub_1C00AC0D4.c)
 * Callees:
 *     <none>
 */

void sub_1C00739F0()
{
  if ( xmmword_1C00934E8 )
    ExFreePoolWithTag(xmmword_1C00934E8, 0x65546152u);
  if ( *(&xmmword_1C00934E8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00934E8 + 1), 0x65546152u);
  if ( xmmword_1C00934F8 )
    ExFreePoolWithTag(xmmword_1C00934F8, 0x65546152u);
  if ( *(&xmmword_1C00934F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00934F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0093510 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0093510 + 1), 0x65546152u);
  if ( xmmword_1C0093520 )
    ExFreePoolWithTag(xmmword_1C0093520, 0x65546152u);
  if ( *(&xmmword_1C0093520 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0093520 + 1), 0x65546152u);
  if ( xmmword_1C0093530 )
    ExFreePoolWithTag(xmmword_1C0093530, 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0093540 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0093540 + 1), 0x65546152u);
  if ( xmmword_1C0093550 )
    ExFreePoolWithTag(xmmword_1C0093550, 0x65546152u);
  if ( *(&xmmword_1C0093550 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0093550 + 1), 0x65546152u);
  if ( xmmword_1C0093560 )
    ExFreePoolWithTag(xmmword_1C0093560, 0x65546152u);
}
