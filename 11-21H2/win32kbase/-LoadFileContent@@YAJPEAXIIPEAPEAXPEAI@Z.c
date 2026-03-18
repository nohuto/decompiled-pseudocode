/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C0051110
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0050A58 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  ULONG Length; // esi
  unsigned int Status; // edi
  PVOID v10; // rdi
  __int64 v11; // rdx
  __int64 Buffer; // rbx
  __int64 v14; // rax
  char v15; // r14
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 FileInformation; // [rsp+100h] [rbp+0h] BYREF
  __int64 v19; // [rsp+110h] [rbp+10h]

  v19 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  Length = DWORD2(FileInformation);
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( HIDWORD(FileInformation) || (unsigned int)(DWORD2(FileInformation) - 64) > 0x3FFC0 )
      return (unsigned int)-1073741672;
    v10 = gpLeakTrackingAllocator;
    v11 = DWORD2(FileInformation);
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x746B7355) == 0x746B7355 )
    {
      v14 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1953198933 )
        {
          if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_5;
        }
        v15 = 0;
        if ( DWORD2(FileInformation) < 0x1000uLL || (WORD4(FileInformation) & 0xFFF) != 0 )
        {
          v15 = 1;
          v11 = DWORD2(FileInformation) + 16LL;
        }
        Buffer = ExAllocatePool2(260LL, v11);
        if ( !Buffer )
          return (unsigned int)-1073741801;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v15 && (unsigned __int64)(Buffer & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v10,
                                  Buffer,
                                  BackTrace) )
          {
            Buffer += 16LL;
LABEL_6:
            if ( Buffer )
              goto LABEL_7;
            return (unsigned int)-1073741801;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v10,
                                     Buffer,
                                     BackTrace) )
        {
LABEL_7:
          Status = ZwReadFile(
                     FileHandle,
                     0LL,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     (PVOID)Buffer,
                     Length,
                     (PLARGE_INTEGER)&gZero,
                     0LL);
          if ( (Status & 0x80000000) == 0 )
          {
            if ( IoStatusBlock.Status < 0 )
            {
              Status = IoStatusBlock.Status;
            }
            else
            {
              if ( LODWORD(IoStatusBlock.Information) == Length )
              {
                *a4 = (void *)Buffer;
                *a5 = Length;
                return Status;
              }
              Status = -1073741762;
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Buffer);
          return Status;
        }
        ExFreePoolWithTag((PVOID)Buffer, 0);
        return (unsigned int)-1073741801;
      }
    }
LABEL_5:
    Buffer = ExAllocatePool2(260LL, DWORD2(FileInformation));
    goto LABEL_6;
  }
  return Status;
}
