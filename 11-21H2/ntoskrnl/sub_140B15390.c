/*
 * XREFs of sub_140B15390 @ 0x140B15390
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_14083248C @ 0x14083248C (sub_14083248C.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 */

__int64 sub_140B15390()
{
  __int64 result; // rax

  byte_140C23908 &= 0xF0u;
  stru_140C23840.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14098F0F0;
  stru_140C23840.Parameter = 0LL;
  stru_140C23840.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback((__int64)_misaligned_access, 0, &qword_140C23900, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&stru_140C238C0.Header.Lock = 8LL;
    stru_140C238C0.Header.WaitListHead.Blink = &stru_140C238C0.Header.WaitListHead;
    stru_140C238C0.Header.WaitListHead.Flink = &stru_140C238C0.Header.WaitListHead;
    qword_140C23878 = (__int64)sub_1405CFC50;
    stru_140C238C0.DueTime.QuadPart = 0LL;
    stru_140C238C0.Period = 0;
    LOWORD(stru_140C238C0.Processor) = 0;
    dword_140C23860 = 275;
    qword_140C23880 = 0LL;
    qword_140C23898 = 0LL;
    qword_140C23870 = 0LL;
    return sub_14083248C();
  }
  return result;
}
