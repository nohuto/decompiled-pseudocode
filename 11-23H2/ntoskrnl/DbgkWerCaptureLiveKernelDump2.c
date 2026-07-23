/*
 * XREFs of DbgkWerCaptureLiveKernelDump2 @ 0x1408837A0
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x140883720 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x14088394C (DbgkpWerIsFullLiveDumpDisabled.c)
 *     DbgkpWerCleanupContext @ 0x140883A04 (DbgkpWerCleanupContext.c)
 *     DbgkpWerProcessPolicyResult @ 0x14093BF30 (DbgkpWerProcessPolicyResult.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump2(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rdi
  NTSTATUS v13; // esi
  size_t v14; // r11
  int v16; // eax
  int v17; // eax
  char v18[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v20[6]; // [rsp+28h] [rbp-30h] BYREF

  v18[0] = 1;
  v19 = 0;
  v20[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  else if ( DbgkpWerInitialized )
  {
    if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
    {
      DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
      return 3221227524LL;
    }
    else
    {
      if ( a7 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange(&DbgkpBusy, 1) == 1 )
        {
          v13 = -1073741267;
        }
        else
        {
          Pool2 = ExAllocatePool2(256LL, 176LL, 1466393156LL);
          if ( Pool2 )
          {
            v13 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
            if ( v13 >= 0 )
            {
              v13 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)Pool2, v14, pszSrc);
              if ( v13 >= 0 )
              {
                v16 = DbgkpWerDefaultPolicy;
                if ( (*(_BYTE *)(a7 + 24) & 2) != 0 )
                  v16 = 1;
                v19 = v16;
                *(_QWORD *)(Pool2 + 56) = a5;
                *(_QWORD *)(Pool2 + 64) = a6;
                *(_DWORD *)(Pool2 + 32) = a2;
                *(_QWORD *)(Pool2 + 40) = a3;
                *(_QWORD *)(Pool2 + 48) = a4;
                *(_QWORD *)(Pool2 + 72) = a7;
                if ( (*(_DWORD *)(a7 + 24) & 8) != 0 )
                  *(_DWORD *)(Pool2 + 104) &= ~2u;
                else
                  *(_DWORD *)(Pool2 + 104) |= 2u;
                v17 = WerLiveKernelCreateReport(Pool2, &v19, v20);
                v13 = v17;
                if ( v17 >= 0 )
                {
                  v13 = DbgkpWerProcessPolicyResult(Pool2, v19, v20[0], v18);
                  if ( !v18[0] )
                    goto LABEL_10;
                }
                else
                {
                  DbgPrintEx(
                    5u,
                    0,
                    "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
                    v17);
                }
              }
            }
            DbgkpWerCleanupContext(Pool2);
            ExFreePoolWithTag((PVOID)Pool2, 0x57676244u);
          }
          else
          {
            v13 = -1073741670;
          }
          _InterlockedExchange(&DbgkpBusy, 0);
        }
LABEL_10:
        KeLeaveCriticalRegion();
        return (unsigned int)v13;
      }
      DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: Called without dump control.\n");
      return 3221225485LL;
    }
  }
  else
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called before initialization.\n");
    return 3221225635LL;
  }
}
