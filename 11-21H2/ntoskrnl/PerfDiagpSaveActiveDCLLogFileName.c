/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x140807EA4
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140818A90 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1406E8410 (RtlDeleteRegistryValue.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  ValueData = (_WORD *)ExAllocatePool2(256LL, 522LL, 1682330192LL);
  if ( ValueData )
  {
    memset(dword_140C16710, 0, 0xB0uLL);
    wcscpy(&xmmword_140C166EC, L"WdiContextLog");
    dword_140C1673C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C166EC);
    qword_140C16798 = (__int64)ValueData;
    word_140C16792 = 520;
    LODWORD(dword_140C16710[0]) = 176;
    if ( (int)NtTraceControl(3u, (unsigned int *)dword_140C16710, 0xB0u, dword_140C16710, 0xB0u, &v2) < 0
      || (unsigned __int16)word_140C16790 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C16790 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
