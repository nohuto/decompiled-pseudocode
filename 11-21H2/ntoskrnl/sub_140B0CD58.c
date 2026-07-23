/*
 * XREFs of sub_140B0CD58 @ 0x140B0CD58
 * Callers:
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CB80 @ 0x140B0CB80 (sub_140B0CB80.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     sub_140B0D440 @ 0x140B0D440 (sub_140B0D440.c)
 *     sub_140B0D470 @ 0x140B0D470 (sub_140B0D470.c)
 */

__int64 __fastcall sub_140B0CD58(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = sub_140B0D470(a1, a2);
    if ( !v5 || !sub_140B0D440(v5, i) )
      break;
  }
  return i;
}
