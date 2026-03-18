/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403DE210
 * Callers:
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C10BE8 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C10C18 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C10C50 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C10C60 = (__int64)WheapProcessWorkQueueItem;
  qword_140C10BF0 = 0LL;
  dword_140C10C00 = 275;
  qword_140C10C20 = (__int64)&WheapWorkQueue;
  qword_140C10C38 = 0LL;
  qword_140C10C10 = 0LL;
  qword_140C10C58 = (__int64)&WheapWorkQueue;
  qword_140C10C40 = 0LL;
  return result;
}
