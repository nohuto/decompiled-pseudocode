/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18004DB8C
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpDynamicShimModule @ 0x18004E0F4 (LdrpDynamicShimModule.c)
 *     LdrpNotifyLoadOfGraph @ 0x18004E3CC (LdrpNotifyLoadOfGraph.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x1800757A4 (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x180080740 (LdrpAddNodeServiceTag.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    return v4;
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
      v4 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
      if ( (v4 & 0x80000000) == 0 )
      {
        v4 = LdrpDynamicShimModule(*(_QWORD *)(a1 + 152));
        if ( (v4 & 0x80000000) != 0 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2560,
            (__int64)"LdrpPrepareModuleForExecution",
            1u,
            "Failed to load for appcompat reasons\n");
          return v4;
        }
        goto LABEL_9;
      }
      return v4;
    case 7:
LABEL_9:
      v6 = *(_QWORD *)(a1 + 176);
      if ( v6 && (*(_BYTE *)(v6 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v7 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v4 = LdrpInitializeGraphRecurse(v7, a2, &v10);
        LdrpReleaseLoaderLock(v8, 2LL);
      }
      return v4;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 56) - 8) >= 2 )
    return (unsigned int)-1073741595;
  return v4;
}
