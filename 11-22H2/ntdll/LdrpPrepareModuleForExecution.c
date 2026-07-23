/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18002DCA8
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpDynamicShimModule @ 0x18002E7F4 (LdrpDynamicShimModule.c)
 *     LdrpNotifyLoadOfGraph @ 0x18002EEE0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x18006F394 (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x18007A590 (LdrpAddNodeServiceTag.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return v2;
  v5 = *(_QWORD *)(a1 + 152);
  switch ( *(_DWORD *)(v5 + 56) )
  {
    case 5:
      LdrpCondenseGraph(v5);
      goto LABEL_4;
    case 6:
LABEL_4:
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
        LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
      v2 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
      if ( (v2 & 0x80000000) == 0 )
      {
        v2 = LdrpDynamicShimModule(*(_QWORD *)(a1 + 152));
        if ( (v2 & 0x80000000) != 0 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2547,
            (__int64)"LdrpPrepareModuleForExecution",
            1u,
            "Failed to load for appcompat reasons\n");
          return v2;
        }
        goto LABEL_9;
      }
      return v2;
    case 7:
LABEL_9:
      v6 = *(_QWORD *)(a1 + 176);
      if ( v6 && (*(_BYTE *)(v6 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v7 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = LdrpInitializeGraphRecurse(v7, a2, &v10);
        LdrpReleaseLoaderLock(v8, 2LL);
      }
      return v2;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 56) - 8) >= 2 )
    return (unsigned int)-1073741595;
  return v2;
}
