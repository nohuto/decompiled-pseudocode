/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403B4ECC
 * Callers:
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C2CB88 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C2CBB8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C2CBF0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C2CC00 = (__int64)WheapProcessWorkQueueItem;
  qword_140C2CB90 = 0LL;
  dword_140C2CBA0 = 275;
  qword_140C2CBC0 = (__int64)&WheapWorkQueue;
  qword_140C2CBD8 = 0LL;
  qword_140C2CBB0 = 0LL;
  qword_140C2CBF8 = (__int64)&WheapWorkQueue;
  qword_140C2CBE0 = 0LL;
  return result;
}
