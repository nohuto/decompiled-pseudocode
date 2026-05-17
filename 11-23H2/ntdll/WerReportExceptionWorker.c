/*
 * XREFs of WerReportExceptionWorker @ 0x1800E8E00
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A18F0 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
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
