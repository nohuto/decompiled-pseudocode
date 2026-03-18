/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1409972B0
 * Callers:
 *     PopFanUpdateCsState @ 0x1409976EC (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x140997768 (PopFanUpdateRunningState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405920CC (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C3C9D0;
  if ( qword_140C3C9D0 < (unsigned __int64)qword_140C3C9D8 )
    v0 = qword_140C3C9D8;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C3C9D8) / 0x989680uLL);
}
