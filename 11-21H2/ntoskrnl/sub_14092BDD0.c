/*
 * XREFs of sub_14092BDD0 @ 0x14092BDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14080B79C @ 0x14080B79C (sub_14080B79C.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 */

char __fastcall sub_14092BDD0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTIMER *v3; // rbp
  int v4; // esi
  int v5; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 128) + 16LL);
  if ( v3 )
    sub_1402E2D20((unsigned __int64)v3, -10000000LL * dword_140C48C98, 0, 0, 0LL);
  v4 = sub_14093A954(*(PVOID *)(a1 + 136));
  KeCancelTimer(v3);
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v4 >= 0 )
  {
    v5 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 104), 0LL);
    if ( v5 >= 0 )
      *(_DWORD *)(a1 + 112) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v5);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v4);
  }
  sub_14080B79C(a1);
  _InterlockedExchange(&dword_140C48CA0, 0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
