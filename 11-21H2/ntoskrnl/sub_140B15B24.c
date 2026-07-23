/*
 * XREFs of sub_140B15B24 @ 0x140B15B24
 * Callers:
 *     sub_140B15450 @ 0x140B15450 (sub_140B15450.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EBB3C @ 0x1406EBB3C (sub_1406EBB3C.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     sub_140833748 @ 0x140833748 (sub_140833748.c)
 *     unknown_libname_4 @ 0x140834418 (unknown_libname_4.c)
 */

__int64 *sub_140B15B24()
{
  void *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 *result; // rax

  memset(qword_140C49440, 0, 0x368uLL);
  RtlRunOnceInitialize(&stru_140C49448);
  RtlRunOnceInitialize(&stru_140C49450);
  v0 = &unk_140C49468;
  do
  {
    sub_1406EBB3C((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C494B0, 0, 0xB8uLL);
  unknown_libname_4(qword_140C494B0);
  memset(&unk_140C494C8, 0, 0x90uLL);
  unknown_libname_4(qword_140C49570);
  RtlRunOnceInitialize(&stru_140C49588);
  stru_140C495A8.TargetInfoAsUlong = 275;
  stru_140C495A8.DpcData = 0LL;
  stru_140C495A8.ProcessorHistory = 0LL;
  stru_140C495A8.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_14053FFB0;
  stru_140C495A8.DeferredContext = qword_140C49440;
  sub_140833748((struct _EX_RUNDOWN_REF *)&stru_140C495E8, 4, (ULONG_PTR)sub_140923590, (ULONG_PTR)qword_140C49440);
  sub_140833748((struct _EX_RUNDOWN_REF *)&unk_140C49630, 4, (ULONG_PTR)sub_140923720, (ULONG_PTR)qword_140C49440);
  RtlRunOnceInitialize(&stru_140C49670);
  result = &qword_140C49678;
  qword_140C49680 = (__int64)&qword_140C49678;
  qword_140C49678 = (__int64)&qword_140C49678;
  return result;
}
