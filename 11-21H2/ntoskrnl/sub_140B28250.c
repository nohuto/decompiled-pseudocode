/*
 * XREFs of sub_140B28250 @ 0x140B28250
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14085B454 @ 0x14085B454 (sub_14085B454.c)
 */

__int64 sub_140B28250()
{
  __int64 result; // rax

  stru_140C23C80.Header.Size = 6;
  *(_QWORD *)&Timer.Header.Lock = 9LL;
  qword_140C23B88 = (__int64)&qword_140C23B80;
  qword_140C23B80 = (ULONG_PTR)&qword_140C23B80;
  qword_140C23BA8 = (__int64)&qword_140C23BA0;
  qword_140C23BA0 = (__int64)&qword_140C23BA0;
  qword_140C23CF8 = (__int64)&qword_140C23CF0;
  qword_140C23CF0 = (__int64)&qword_140C23CF0;
  qword_140C23CD0 = (__int64)sub_140357EE0;
  qword_140C23C70 = (__int64)&qword_140C23C68;
  qword_140C23C68 = (__int64)&qword_140C23C68;
  stru_140C23C80.Header.WaitListHead.Blink = &stru_140C23C80.Header.WaitListHead;
  stru_140C23C80.Header.WaitListHead.Flink = &stru_140C23C80.Header.WaitListHead;
  stru_140C23BC0.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_1402519B0;
  Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
  Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
  qword_140C23B78 = (__int64)&qword_140C23B70;
  qword_140C23B70 = (ULONG_PTR)&qword_140C23B70;
  qword_140C23B60 = (__int64)&qword_140C23B70;
  dword_140C0982C *= 10000;
  qword_140C23B98 = 0LL;
  qword_140C23C48 = 0LL;
  qword_140C23CE0 = 0LL;
  qword_140C23CD8 = 0LL;
  qword_140C23CC0 = 0LL;
  qword_140C23CB8 = 0LL;
  qword_140C23C60 = 0LL;
  LOWORD(stru_140C23C80.Header.Lock) = 0;
  stru_140C23C80.Header.SignalState = 1;
  stru_140C23BC0.TargetInfoAsUlong = 275;
  stru_140C23BC0.DeferredContext = 0LL;
  stru_140C23BC0.DpcData = 0LL;
  stru_140C23BC0.ProcessorHistory = 0LL;
  Timer.DueTime.QuadPart = 0LL;
  Timer.Period = 0;
  LOWORD(Timer.Processor) = 0;
  if ( (unsigned int)dword_140C0C63C >= 3 )
    dword_140C0C63C = 1;
  qword_140C23D00 = 0LL;
  memset(&byte_140C23D21, 0, 0x6FuLL);
  byte_140C23D20[0] = 1;
  dword_140C23CB0 = dword_140C0C810;
  if ( dword_140C22264 )
    dword_140C23CB0 = 0;
  qword_140C23CA8 = (__int64)&qword_140C23CA0;
  qword_140C23CA0 = (__int64)&qword_140C23CA0;
  sub_14085B454((struct _KSEMAPHORE *)&unk_140C23DA0, 0LL);
  *(_QWORD *)&stru_140C20A60.Header.Lock = 9LL;
  qword_140C20A48 = (__int64)&qword_140C20A40;
  qword_140C20A40 = (__int64)&qword_140C20A40;
  qword_140C20AD0 = (__int64)sub_1405D5360;
  stru_140C20AE0.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_14045E5B0;
  stru_140C20A60.Header.WaitListHead.Blink = &stru_140C20A60.Header.WaitListHead;
  stru_140C20A60.Header.WaitListHead.Flink = &stru_140C20A60.Header.WaitListHead;
  qword_140C1C970 = 0LL;
  qword_140C20A30 = 0LL;
  qword_140C20AD8 = 0LL;
  qword_140C20AC0 = 0LL;
  stru_140C20AE0.TargetInfoAsUlong = 275;
  stru_140C20AE0.DeferredContext = 0LL;
  stru_140C20AE0.DpcData = 0LL;
  stru_140C20AE0.ProcessorHistory = 0LL;
  stru_140C20A60.DueTime.QuadPart = 0LL;
  stru_140C20A60.Period = 0;
  LOWORD(stru_140C20A60.Processor) = 0;
  qword_140C20B30 = 0LL;
  dword_140C23B58 = 0;
  xmmword_140C1C960 = 0LL;
  if ( dword_140D0514C )
    dword_140C23B58 = 1000 * (dword_140D0514C + 120);
  result = (unsigned int)dword_140D05078;
  dword_140C23B90 = 0;
  if ( (_DWORD)dword_140D05078 )
  {
    result = (unsigned int)(dword_140D05078 + 120);
    dword_140C23B90 = 1000 * result;
  }
  return result;
}
