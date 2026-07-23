/*
 * XREFs of sub_140B24410 @ 0x140B24410
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

PSLIST_ENTRY sub_140B24410()
{
  _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(stru_140C10B00.Header.Lock) = 1;
  qword_140C10B28 = (__int64)&qword_140C10B20;
  qword_140C10B20 = (__int64)&qword_140C10B20;
  stru_140C10B00.Header.Size = 6;
  qword_140C0FA48 = (__int64)&qword_140C0FA40;
  qword_140C0FA40 = (__int64)&qword_140C0FA40;
  stru_140C10B00.Header.SignalState = 1;
  stru_140C10B00.Header.WaitListHead.Blink = &stru_140C10B00.Header.WaitListHead;
  stru_140C10B00.Header.WaitListHead.Flink = &stru_140C10B00.Header.WaitListHead;
  LOWORD(stru_140C10AE0.Header.Lock) = 1;
  stru_140C10AE0.Header.WaitListHead.Blink = &stru_140C10AE0.Header.WaitListHead;
  stru_140C10AE0.Header.WaitListHead.Flink = &stru_140C10AE0.Header.WaitListHead;
  stru_140C0E9A8.Queue.Wcb.CurrentIrp = 0LL;
  stru_140C10AE0.Header.Size = 6;
  stru_140C10AE0.Header.SignalState = 1;
  *(_OWORD *)&stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters = 0LL;
  if ( EtwRegister(
         &stru_140012DD0,
         (PETWENABLECALLBACK)sub_140860F30,
         0LL,
         (PREGHANDLE)&stru_140C0E9A8.Queue.Wcb.DeviceRoutine) )
  {
    stru_140C0E9A8.Queue.Wcb.DeviceRoutine = 0LL;
  }
  if ( ((unsigned __int8)&stru_140CFCEC0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &stru_140CF96C0;
  stru_140CFCEC0 = 0LL;
  v1 = 128LL;
  do
  {
    memset(v0, 0, 0x70uLL);
    result = ExpInterlockedPushEntrySList(&stru_140CFCEC0, v0);
    v0 += 7;
    --v1;
  }
  while ( v1 );
  return result;
}
