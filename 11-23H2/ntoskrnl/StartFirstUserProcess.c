/*
 * XREFs of StartFirstUserProcess @ 0x140B68C34
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x1403AA320 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14041B470 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x14041BB30 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FinalizeBootLogo @ 0x14054EE7C (FinalizeBootLogo.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     RtlCreateUserProcessEx @ 0x140B68E40 (RtlCreateUserProcessEx.c)
 *     QueryRegistryHideMachine @ 0x140B690E0 (QueryRegistryHideMachine.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B90CD8 (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  UNICODE_STRING *p_UnicodeString; // rsi
  int v1; // eax
  __int64 MaximumLength; // r14
  __int64 v3; // rbx
  __int64 Pool2; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int128 v7; // xmm0
  BOOLEAN v8; // r8
  PRTL_USER_PROCESS_EXTENDED_PARAMETERS v9; // r9
  ULONG_PTR v10; // rbx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-49h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-39h] BYREF
  int v16; // [rsp+F0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  p_UnicodeString = (UNICODE_STRING *)&NtInitialUserProcess;
  UnicodeString = 0LL;
  memset(&ProcessInformation, 0, 0x64uLL);
  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  v1 = ExpInitializeRunLevel0(&UnicodeString);
  if ( v1 >= 0 )
  {
    p_UnicodeString = &UnicodeString;
  }
  else if ( v1 != -1073741637 )
  {
    KeBugCheckEx(0x6Du, v1, 0LL, 4uLL, 0LL);
  }
  MaximumLength = stru_140D49DB8.MaximumLength;
  v3 = p_UnicodeString->MaximumLength + stru_140D49DA8.MaximumLength + 1096LL;
  Pool2 = ExAllocatePool2(64LL, v3 + stru_140D49DB8.MaximumLength, 0x62537350u);
  v5 = Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  *(_DWORD *)(Pool2 + 4) = v3;
  *(_DWORD *)Pool2 = v3;
  *(_DWORD *)(Pool2 + 8) = 4194305;
  *(_QWORD *)(Pool2 + 1008) = MaximumLength;
  *(_QWORD *)(Pool2 + 128) = v3 + Pool2;
  v6 = Pool2 + 1096;
  *(_OWORD *)(Pool2 + 80) = 0LL;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 64) = Pool2 + 1096;
  *(_WORD *)(Pool2 + 58) = stru_140D49DA8.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 56), &stru_140D49DA8);
  *(_QWORD *)(v5 + 104) = v6 + *(unsigned __int16 *)(v5 + 58);
  *(_WORD *)(v5 + 98) = p_UnicodeString->MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v5 + 96), p_UnicodeString);
  v7 = *(_OWORD *)(v5 + 96);
  DestinationString.Buffer = *(wchar_t **)(v5 + 128);
  *(_OWORD *)(v5 + 112) = v7;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_140D49DB8);
  v10 = RtlCreateUserProcessEx(
          (PUNICODE_STRING)(v5 + 96),
          (PRTL_USER_PROCESS_PARAMETERS)v5,
          v8,
          v9,
          &ProcessInformation);
  if ( InbvIsBootDriverInstalled() )
    FinalizeBootLogo();
  if ( (v10 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v10, 0LL, 1uLL, 0LL);
  v16 = 1;
  v11 = ZwSetInformationProcess(ProcessInformation.ProcessHandle, ProcessBreakOnTermination, &v16, 4u);
  if ( v11 < 0 )
    KeBugCheckEx(0x6Du, v11, 0LL, 2uLL, 0LL);
  v12 = ZwResumeThread(ProcessInformation.ThreadHandle, 0LL);
  if ( v12 < 0 )
    KeBugCheckEx(0x6Du, v12, 0LL, 3uLL, 0LL);
  byte_140C6AB4C = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ProcessInformation.ThreadHandle);
  ZwClose(ProcessInformation.ProcessHandle);
  ExFreePoolWithTag((PVOID)v5, 0);
  RtlFreeUnicodeString(&UnicodeString);
}
