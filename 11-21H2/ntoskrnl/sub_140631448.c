/*
 * XREFs of sub_140631448 @ 0x140631448
 * Callers:
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall sub_140631448(__int64 a1, unsigned __int8 a2)
{
  PSLIST_ENTRY v4; // rdi
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v6; // rsi

  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 928));
  if ( !v4 && a2 <= 2u )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 960)) <= *(_DWORD *)(a1 + 964)
      && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(72LL, 144LL, 1098347589LL), (v6 = Pool2) != 0LL) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 944), Pool2 + 6);
      return v6 + 7;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
    }
  }
  return v4;
}
