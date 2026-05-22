/*
 * XREFs of ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x18016D588
 * Callers:
 *     ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18016D6B0 (-UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017043C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1800CD6F4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

_QWORD *__fastcall QpcTimeConverter::GetPointerInfoTimePoint(QpcTimeConverter *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(a1, *(_QWORD *)(a3 + 80), &v7) )
    v5 = v7;
  else
    v5 = 1000LL * *(unsigned int *)(a3 + 64);
  *a2 = 1000 * v5;
  return a2;
}
