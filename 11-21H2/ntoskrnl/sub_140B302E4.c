/*
 * XREFs of sub_140B302E4 @ 0x140B302E4
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_1406E8E9C @ 0x1406E8E9C (sub_1406E8E9C.c)
 */

void sub_140B302E4()
{
  sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
  sub_1406E8E9C(1u);
  stru_140C1FBA0.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_1402D66F0;
  *(_QWORD *)&stru_140C1FBE0.Header.Lock = 8LL;
  stru_140C1FBE0.Header.WaitListHead.Blink = &stru_140C1FBE0.Header.WaitListHead;
  stru_140C1FBE0.Header.WaitListHead.Flink = &stru_140C1FBE0.Header.WaitListHead;
  stru_140C1FBA0.TargetInfoAsUlong = 275;
  stru_140C1FBA0.DeferredContext = 0LL;
  stru_140C1FBA0.DpcData = 0LL;
  stru_140C1FBA0.ProcessorHistory = 0LL;
  stru_140C1FBE0.DueTime.QuadPart = 0LL;
  stru_140C1FBE0.Period = 0;
  LOWORD(stru_140C1FBE0.Processor) = 0;
  if ( dword_140C09830 )
    KeSetCoalescableTimer(
      &stru_140C1FBE0,
      (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_140C09830),
      1000 * dword_140C09830,
      0x3E8u,
      &stru_140C1FBA0);
  sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
}
