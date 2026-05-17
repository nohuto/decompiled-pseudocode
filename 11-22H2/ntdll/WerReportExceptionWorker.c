/*
 * XREFs of WerReportExceptionWorker @ 0x1800E7AD0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009F830 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx

  RtlReportExceptionEx(a1 + 16, 2LL, *(_DWORD *)(a1 + 8) & 0x1F, (void *)0xFFFFFFFFFFFFFFFFLL, *(_QWORD *)a1);
  v1 = *(void **)a1;
  ZwFreeVirtualMemory();
  NtSetInformationThread();
  ZwResumeThread();
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread();
  return (unsigned int)v1;
}
