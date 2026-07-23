/*
 * XREFs of sub_1409E52D0 @ 0x1409E52D0
 * Callers:
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 *     sub_1406E7DC0 @ 0x1406E7DC0 (sub_1406E7DC0.c)
 *     sub_1409E5790 @ 0x1409E5790 (sub_1409E5790.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 *     sub_1409E5224 @ 0x1409E5224 (sub_1409E5224.c)
 */

char __fastcall sub_1409E52D0(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  struct _KTHREAD *v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140C09154 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09150 )
        dword_140C09150 = sub_14024F664(off_140C09148, &v8);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09148);
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
    qword_140C547C0 = (__int64)KeGetCurrentThread();
    if ( (a2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (a2 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        sub_1406E7E90((int **)a1);
        memset((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        sub_1409E5224(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v5 + 2) & 1) == 0 )
          MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
    }
  }
  v6 = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_140C547C0 == v6 )
  {
    qword_140C547C0 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    LOBYTE(v6) = sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return (char)v6;
}
