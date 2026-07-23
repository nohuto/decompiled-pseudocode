/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403B50AC
 * Callers:
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C2CB48 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C2CB78 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C2CBB0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C2CBC0 = (__int64)WheapProcessWorkQueueItem;
  qword_140C2CB50 = 0LL;
  dword_140C2CB60 = 275;
  qword_140C2CB80 = (__int64)&WheapWorkQueue;
  qword_140C2CB98 = 0LL;
  qword_140C2CB70 = 0LL;
  qword_140C2CBB8 = (__int64)&WheapWorkQueue;
  qword_140C2CBA0 = 0LL;
  return result;
}
