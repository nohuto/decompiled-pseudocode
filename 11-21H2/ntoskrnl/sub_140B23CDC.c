/*
 * XREFs of sub_140B23CDC @ 0x140B23CDC
 * Callers:
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1408506E0 @ 0x1408506E0 (sub_1408506E0.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B23CDC()
{
  unsigned __int64 Pool2; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  stru_140C546A8.Count = 1;
  qword_140C54690 = 0LL;
  qword_140C54688 = (__int64)&qword_140C54680;
  qword_140C54680 = (__int64)&qword_140C54680;
  stru_140C546A8.Owner = 0LL;
  qword_140C546A0 = &qword_140C54698;
  qword_140C54698 = &qword_140C54698;
  stru_140C546A8.Event.Header.WaitListHead.Blink = &stru_140C546A8.Event.Header.WaitListHead;
  stru_140C546A8.Event.Header.WaitListHead.Flink = &stru_140C546A8.Event.Header.WaitListHead;
  DestinationString = 0LL;
  stru_140C546A8.Contention = 0;
  LOWORD(stru_140C546A8.Event.Header.Lock) = 1;
  stru_140C546A8.Event.Header.Size = 6;
  stru_140C546A8.Event.Header.SignalState = 0;
  dword_140C546E4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  sub_14085075C(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140C546E8);
  sub_1408506E0((__int64)&unk_140C546F8);
  qword_140C54788 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0xA0uLL, 0x66506343u);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *(_BYTE *)Pool2 = 8;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 60) = 0;
    *(_WORD *)(Pool2 + 56) = 0;
    *(_QWORD *)(Pool2 + 88) = sub_140377360;
    *(_DWORD *)(Pool2 + 64) = 275;
    *(_QWORD *)(Pool2 + 96) = Pool2;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 144) = sub_1407F8B10;
    *(_QWORD *)(Pool2 + 152) = Pool2;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    sub_1402E2D20(Pool2, -6000000000LL, 0, 0, Pool2 + 64);
  }
  return 0LL;
}
