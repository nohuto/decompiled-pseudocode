/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1409DD9B0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083B690 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435A00 (memset.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1407D42E0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140873D00 (RtlDeleteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  PVOID ValueData; // [rsp+20h] [rbp-18h]
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 522LL, 1682330192LL);
  if ( Pool2 )
  {
    memset(dword_140C32790, 0, 0xB0uLL);
    wcscpy(&xmmword_140C3276C, L"WdiContextLog");
    dword_140C327BC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C3276C);
    qword_140C32818 = (__int64)Pool2;
    word_140C32812 = 520;
    LODWORD(dword_140C32790[0]) = 176;
    LODWORD(ValueData) = 176;
    if ( (int)NtTraceControl(
                3u,
                (unsigned int *)dword_140C32790,
                0xB0u,
                (volatile signed __int64 *)dword_140C32790,
                (SIZE_T)ValueData,
                (unsigned __int64)&v3) < 0
      || (unsigned __int16)word_140C32810 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C32810 >> 1;
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
