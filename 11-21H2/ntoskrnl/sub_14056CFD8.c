/*
 * XREFs of sub_14056CFD8 @ 0x14056CFD8
 * Callers:
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 * Callees:
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 */

char __fastcall sub_14056CFD8(__int64 a1, char a2)
{
  char result; // al

  result = sub_14056CF48(a1, qword_140C4E948 + dword_140D06984, dword_140D06960, 1, 1, 0);
  if ( a2 )
  {
    if ( qword_140C2B7F8 )
      return sub_14056CF48(a1, qword_140C2B7F8, 0, 2, 1, 0);
  }
  return result;
}
