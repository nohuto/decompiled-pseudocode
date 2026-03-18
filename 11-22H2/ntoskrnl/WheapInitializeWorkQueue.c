/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403B483C
 * Callers:
 *     WheaInitialize @ 0x140B4C7E8 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C2CB68 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C2CB98 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C2CBD0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C2CBE0 = (__int64)WheapProcessWorkQueueItem;
  qword_140C2CB70 = 0LL;
  dword_140C2CB80 = 275;
  qword_140C2CBA0 = (__int64)&WheapWorkQueue;
  qword_140C2CBB8 = 0LL;
  qword_140C2CB90 = 0LL;
  qword_140C2CBD8 = (__int64)&WheapWorkQueue;
  qword_140C2CBC0 = 0LL;
  return result;
}
