/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0152CEC
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0164A30 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C004F810 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *GetProcessCommandLine(void)
{
  int v0; // r13d
  char *v1; // rdi
  char *v2; // r14
  PVOID v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  char **Pool2; // rsi
  PVOID v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12; // r15
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16[26]; // [rsp+110h] [rbp+10h] BYREF
  ULONG ProcessInformationLength; // [rsp+1F0h] [rbp+F0h] BYREF
  void *ProcessHandle; // [rsp+1F8h] [rbp+F8h] BYREF

  v0 = 0;
  ObjectAttributes.Length = 48;
  ProcessInformationLength = 0;
  v1 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  v2 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Attributes = 512;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0
    || ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) != -1073741820
    || ProcessInformationLength < 0x10 )
  {
    goto LABEL_25;
  }
  v3 = gpLeakTrackingAllocator;
  v4 = ProcessInformationLength + 2LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79747355) != 0x79747355
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = (char **)ExAllocatePool2(261LL, v4);
    goto LABEL_9;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 2037674837 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
  {
    LOBYTE(v2) = 1;
    v4 = ProcessInformationLength + 18LL;
  }
  Pool2 = (char **)ExAllocatePool2(261LL, v4);
  if ( !Pool2 )
    goto LABEL_24;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !(_BYTE)v2 || (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v3,
                            Pool2,
                            BackTrace) )
    {
      v2 = (char *)Pool2;
      goto LABEL_10;
    }
LABEL_39:
    ExFreePoolWithTag(Pool2, 0);
LABEL_24:
    v2 = 0LL;
    goto LABEL_25;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v3,
                           Pool2,
                           BackTrace) )
    goto LABEL_39;
  Pool2 += 2;
LABEL_9:
  v2 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_25;
LABEL_10:
  if ( ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         Pool2,
         ProcessInformationLength,
         0LL) < 0 )
    goto LABEL_25;
  v7 = gpLeakTrackingAllocator;
  v8 = *(unsigned __int16 *)Pool2 + 2LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79747355) != 0x79747355
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_15:
    v10 = ExAllocatePool2(261LL, v8);
    goto LABEL_16;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 2037674837 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_15;
  }
  v12 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 = *(unsigned __int16 *)Pool2 + 18LL;
  }
  v10 = ExAllocatePool2(261LL, v8);
  if ( !v10 )
    goto LABEL_44;
  memset(v16, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, v16, 0LL);
  if ( v12 && (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v7, v10, v16) )
    {
      v10 += 16LL;
LABEL_16:
      v1 = (char *)v10;
      if ( !v10 )
        goto LABEL_25;
      goto LABEL_17;
    }
LABEL_51:
    ExFreePoolWithTag((PVOID)v10, 0);
LABEL_44:
    v1 = 0LL;
    goto LABEL_25;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v7, v10, v16) )
    goto LABEL_51;
  v1 = (char *)v10;
LABEL_17:
  if ( (int)RtlStringCchCopyNW(
              (char *)v10,
              *(unsigned __int16 *)Pool2 + 1LL,
              Pool2[1],
              (unsigned __int64)*(unsigned __int16 *)Pool2 >> 1) >= 0 )
    v0 = 1;
LABEL_25:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v2);
  if ( v0 != 1 && v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
    return 0LL;
  }
  return v1;
}
