/*
 * XREFs of sub_140B26BAC @ 0x140B26BAC
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_140857B64 @ 0x140857B64 (sub_140857B64.c)
 */

PVOID *sub_140B26BAC()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140D00C60;
  v1 = 17LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = PsGetHostSilo;
    v0[1] = sub_140A48390;
    v0[2] = (__int64 (*)())sub_140645A60;
    v0[3] = PsGetHostSilo;
    v0[4] = (__int64 (*)())_misaligned_access;
    v0[5] = 0LL;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  qword_140C10BC0 = 0LL;
  qword_140D010A0 = (__int64)&qword_140D01098;
  qword_140D01098 = &qword_140D01098;
  qword_140D01090 = 0LL;
  _InterlockedOr(v3, 0);
  byte_140CE1AD5 = 1;
  stru_140C0E9A8.DeviceExtension = &stru_140C0E9A8.Vpb;
  stru_140C0E9A8.Vpb = (PVPB)&stru_140C0E9A8.Vpb;
  *(_QWORD *)&stru_140C0E9A8.Queue.Wcb.NumberOfChannels = &stru_140C0E9A8.Queue.ListEntry.Blink;
  stru_140C0E9A8.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)&stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink;
  qword_140C10B58 = (__int64)sub_140645B90;
  stru_140C10BA0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140645CF0;
  LODWORD(stru_140C0E9A8.AttachedDevice) = 1;
  stru_140C0E9A8.CurrentIrp = 0LL;
  LODWORD(stru_140C0E9A8.Timer) = 0;
  LOWORD(stru_140C0E9A8.Flags) = 1;
  BYTE2(stru_140C0E9A8.Flags) = 6;
  stru_140C0E9A8.Characteristics = 0;
  qword_140C10B80 = 0LL;
  LODWORD(dword_140C10B40) = 275;
  qword_140C10B60 = 0LL;
  qword_140C10B78 = 0LL;
  qword_140C10B50 = 0LL;
  stru_140C10BA0.Parameter = 0LL;
  stru_140C10BA0.List.Flink = 0LL;
  _InterlockedOr(v3, 0);
  byte_140CE1AD1 = 1;
  return sub_140857B64();
}
