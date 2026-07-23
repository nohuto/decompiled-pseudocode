/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x180001B50
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x180074300 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 */

int __fastcall RtlWow64GetSharedInfoProcess(HANDLE ProcessHandle, _BYTE *a2, void *a3)
{
  int result; // eax
  void *v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = (void *)(v8 + 1160);
      *a2 = 1;
      return ZwReadVirtualMemory(ProcessHandle, v7, a3, 0x28uLL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
