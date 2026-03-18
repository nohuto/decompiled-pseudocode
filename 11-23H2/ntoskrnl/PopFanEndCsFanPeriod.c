/*
 * XREFs of PopFanEndCsFanPeriod @ 0x140997200
 * Callers:
 *     PopFanUpdateCsState @ 0x14099763C (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1409976B8 (PopFanUpdateRunningState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14059203C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C3C950;
  if ( qword_140C3C950 < (unsigned __int64)qword_140C3C958 )
    v0 = qword_140C3C958;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C3C958) / 0x989680uLL);
}
