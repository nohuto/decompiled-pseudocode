/*
 * XREFs of VidSchiProcessIsrSuspendContextCompleted @ 0x1C00434C0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

const signed __int64 *__fastcall VidSchiProcessIsrSuspendContextCompleted(union _SLIST_HEADER *a1, __int64 a2)
{
  struct _SLIST_ENTRY *v4; // r14
  const signed __int64 *result; // rax
  struct _SLIST_ENTRY *Next; // rbx
  PSLIST_ENTRY v7; // rax

  v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(a2 + 8) + 8LL);
  result = (const signed __int64 *)a1[37].Alignment;
  Next = v4[1].Next;
  if ( !_bittest64(result, WORD2(Next->Next)) )
  {
    result = (const signed __int64 *)LODWORD(Next[1].Next);
    if ( (_DWORD)result != 1 )
    {
      if ( LODWORD(Next[1].Next) == 2 )
      {
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, WORD2(Next->Next), 0LL);
        __debugbreak();
      }
      v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[503]);
      if ( v7 )
      {
        v7[2].Next = v4;
        *((_QWORD *)&v7[2].Next + 1) = *(_QWORD *)(a2 + 16);
        LODWORD(v7->Next) = 17;
        return (const signed __int64 *)ExpInterlockedPushEntrySList(a1 + 111, v7 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, WORD2(Next->Next));
        return (const signed __int64 *)((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                                         0LL,
                                         0x40000LL,
                                         0xFFFFFFFFLL,
                                         L"The list of pending context suspend completed interrupts is full on node %d. Th"
                                          "ere must be severe contention on the scheduler spin lock. This interrupt will be ignored.",
                                         WORD2(Next->Next),
                                         0LL,
                                         0LL,
                                         0LL,
                                         0LL);
      }
    }
  }
  return result;
}
