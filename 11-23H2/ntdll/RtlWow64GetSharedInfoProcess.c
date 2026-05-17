/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x180001DD0
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall RtlWow64GetSharedInfoProcess(void *a1, _BYTE *a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = NtQueryInformationProcess(a1, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = v8 + 1160;
      *a2 = 1;
      return ZwReadVirtualMemory(a1, v7, a3, 40LL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
