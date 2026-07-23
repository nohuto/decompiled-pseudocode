/*
 * XREFs of PopFanEndCsFanPeriod @ 0x140997400
 * Callers:
 *     PopFanUpdateCsState @ 0x14099783C (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1409978B8 (PopFanUpdateRunningState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14059252C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C3C910;
  if ( qword_140C3C910 < (unsigned __int64)qword_140C3C918 )
    v0 = qword_140C3C918;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C3C918) / 0x989680uLL);
}
