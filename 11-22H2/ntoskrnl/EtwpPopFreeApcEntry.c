/*
 * XREFs of EtwpPopFreeApcEntry @ 0x140468390
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall EtwpPopFreeApcEntry(__int64 a1, unsigned __int8 a2)
{
  PSLIST_ENTRY v4; // rdi
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v6; // rsi

  v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 928));
  if ( !v4 && a2 <= 2u )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 960)) <= *(_DWORD *)(a1 + 968)
      && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(72LL, 144LL, 1098347589LL), (v6 = Pool2) != 0LL) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 944), Pool2 + 6);
      return v6 + 7;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
    }
  }
  return v4;
}
