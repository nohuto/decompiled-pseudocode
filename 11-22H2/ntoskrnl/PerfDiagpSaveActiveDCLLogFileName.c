/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1409DDA60
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083D420 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435400 (memset.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1407D4860 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1408741D0 (RtlDeleteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnLength = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 522LL, 1682330192LL);
  if ( Pool2 )
  {
    memset(&OutputBuffer, 0, 0xB0uLL);
    wcscpy(&xmmword_140C3270C, L"WdiContextLog");
    dword_140C3275C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C3270C);
    qword_140C327B8 = (__int64)Pool2;
    word_140C327B2 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140C327B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C327B0 >> 1;
      Pool2[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        Pool2,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
