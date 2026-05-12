/*
 * XREFs of RaidAdapterConfigureResources @ 0x1C0034B08
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x1C003F258 (RaidInitializeDeferredQueue.c)
 *     RaInitializeBus @ 0x1C00A82CC (RaInitializeBus.c)
 *     RaidDeleteResourceList @ 0x1C00A93E0 (RaidDeleteResourceList.c)
 *     RaidInitializeResourceList @ 0x1C00A9434 (RaidInitializeResourceList.c)
 */

__int64 __fastcall RaidAdapterConfigureResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // r8

  v3 = a1 + 320;
  RaidDeleteResourceList(a1 + 320);
  result = RaidInitializeResourceList(v3, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaInitializeBus(a1 + 656, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      if ( *(char *)(a1 + 110) >= 0 )
        RaidInitializeDeferredQueue(a1 + 944, *(_QWORD *)(a1 + 8), v8, 80LL, RaidAdapterDeferredRoutine);
      KeInitializeDpc((PRKDPC)(a1 + 1456), (PKDEFERRED_ROUTINE)RaidpAdapterTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1584), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1784), RaidCompletionDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4136), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1848), (PKDEFERRED_ROUTINE)RaidAdapterBusChangeDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1648), RaidAdapterRestartDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5392), (PKDEFERRED_ROUTINE)RaidQueueWaitCheckDpcRoutine, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
