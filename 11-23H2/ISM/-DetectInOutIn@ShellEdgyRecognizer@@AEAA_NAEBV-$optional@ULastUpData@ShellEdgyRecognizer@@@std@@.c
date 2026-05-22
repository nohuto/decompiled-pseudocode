/*
 * XREFs of ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180170268
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017043C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180170384 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 */

bool __fastcall ShellEdgyRecognizer::DetectInOutIn(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(a2 + 24)
      && (unsigned int)ShellEdgyRecognizer::HitTestEdgyRegion(a1, *(_QWORD *)(a2 + 16))
      && *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 8)
      && 1000000 * qword_180268048 >= *(_QWORD *)(a1 + 48) - *(_QWORD *)a2
      && (int)abs32(*(_DWORD *)(a1 + 40) - *(_DWORD *)(a2 + 16)) <= dword_180268050
      && (int)abs32(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a2 + 20)) <= dword_180268054;
}
