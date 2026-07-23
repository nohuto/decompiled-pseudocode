/*
 * XREFs of sub_140B509E0 @ 0x140B509E0
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

__int64 sub_140B509E0()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  stru_140C445E0.Owner = 0LL;
  stru_140C445E0.Contention = 0;
  stru_140C445E0.Event.Header.SignalState = 0;
  qword_140C445C8 = (__int64)&qword_140C445C0;
  qword_140C445C0 = &qword_140C445C0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  stru_140C445E0.Event.Header.WaitListHead.Blink = &stru_140C445E0.Event.Header.WaitListHead;
  stru_140C445E0.Event.Header.WaitListHead.Flink = &stru_140C445E0.Event.Header.WaitListHead;
  DestinationString = 0LL;
  stru_140C445E0.Count = 1;
  LOWORD(stru_140C445E0.Event.Header.Lock) = 1;
  stru_140C445E0.Event.Header.Size = 6;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&qword_140C445D8, &ObjectAttributes, 0, 0) >= 0 )
    ExRegisterCallback(qword_140C445D8, (PCALLBACK_FUNCTION)sub_140958B00, qword_140C46278);
  return 0LL;
}
