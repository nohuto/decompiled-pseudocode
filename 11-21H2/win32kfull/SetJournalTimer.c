/*
 * XREFs of SetJournalTimer @ 0x1C01E5EC8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 */

__int64 __fastcall SetJournalTimer(unsigned int a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) = a2;
  result = InternalSetTimer(0LL, qword_1C033BC88, a1, (__int64)JournalTimer, 32, 276);
  qword_1C033BC88 = result;
  return result;
}
