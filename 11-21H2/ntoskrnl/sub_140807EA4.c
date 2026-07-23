/*
 * XREFs of sub_140807EA4 @ 0x140807EA4
 * Callers:
 *     sub_140818A90 @ 0x140818A90 (sub_140818A90.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1406E8410 (RtlDeleteRegistryValue.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140807EA4()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnLength = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 522LL, 1682330192LL);
  if ( Pool2 )
  {
    memset(&InputBufferLength, 0, 0xB0uLL);
    wcscpy(&xmmword_140C166EC, L"WdiContextLog");
    dword_140C1673C = 0x20000;
    RtlInitUnicodeString(&stru_140C167A0, &xmmword_140C166EC);
    qword_140C16798 = (__int64)Pool2;
    word_140C16792 = 520;
    InputBufferLength = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &InputBufferLength, 0xB0u, &InputBufferLength, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140C16790 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C16790 >> 1;
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
