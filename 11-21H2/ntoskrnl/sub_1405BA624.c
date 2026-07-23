/*
 * XREFs of sub_1405BA624 @ 0x1405BA624
 * Callers:
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405BA5F0 @ 0x1405BA5F0 (sub_1405BA5F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall sub_1405BA624(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) + 32LL;
    v7 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v7 + 24) = (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 2000), (PSLIST_ENTRY)v7);
    KeSetEvent((PRKEVENT)(v5 + 1976), 0, 0);
    sub_1405BA5F0(v5);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(a1, *(_QWORD *)(a2 + 64));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1680) + 352LL), (PSLIST_ENTRY)(a2 + 80));
}
