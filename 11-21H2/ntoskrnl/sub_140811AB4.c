/*
 * XREFs of sub_140811AB4 @ 0x140811AB4
 * Callers:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     sub_140AF2E9C @ 0x140AF2E9C (sub_140AF2E9C.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 */

char __fastcall sub_140811AB4(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C499D4, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&stru_140C49A20, DueTime, 0, 0x3A98u, &stru_140C499E0);
  return v1;
}
