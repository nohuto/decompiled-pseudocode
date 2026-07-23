/*
 * XREFs of RtlpxLookupFunctionTable @ 0x18003A100
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     RtlGuardCheckExceptionHandler @ 0x180032BD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180036378 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180039DA0 (RtlLookupFunctionEntry.c)
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     RtlPcToFileHeader @ 0x18007AE70 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x1800A3650 (RtlLookupFunctionTable.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 *     EtwpProviderArrivalCallback @ 0x180123318 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1800345EC (RtlCaptureImageExceptionValues.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x18007717C (RtlpGetImageBaseViaQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(PVOID BaseAddress, __int64 *a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  int v6; // r10d
  int v7; // r9d
  int v8; // eax
  char *v9; // r8
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  void *ImageBaseViaQueryVirtualMemory; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = LdrInitState == 3;
  v13 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v4 )
  {
    RtlAcquireSRWLockShared(&LdrpInvertedFunctionTableSRWLock);
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      v6 = 1;
      v7 = LdrpInvertedFunctionTable[0] - 1;
      while ( v7 >= v6 )
      {
        v8 = (v7 + v6) >> 1;
        v9 = (char *)&xmmword_18018F510 + 24 * v8;
        v10 = *((_QWORD *)v9 + 1);
        if ( (unsigned __int64)BaseAddress < v10 )
        {
          if ( !v8 )
            break;
          v7 = v8 - 1;
        }
        else
        {
          if ( (unsigned __int64)BaseAddress < v10 + *((unsigned int *)v9 + 4) )
          {
            *(_OWORD *)a2 = *(_OWORD *)v9;
            a2[2] = *((_QWORD *)v9 + 2);
            v2 = *a2;
            v13 = *a2;
            break;
          }
          v6 = v8 + 1;
        }
      }
    }
    RtlReleaseSRWLockShared(&LdrpInvertedFunctionTableSRWLock);
    if ( v2 || !byte_18018F50C )
      return v2;
  }
  ImageBaseViaQueryVirtualMemory = (void *)RtlpGetImageBaseViaQueryVirtualMemory(BaseAddress);
  a2[1] = (__int64)ImageBaseViaQueryVirtualMemory;
  if ( !ImageBaseViaQueryVirtualMemory )
    return v2;
  RtlCaptureImageExceptionValues(ImageBaseViaQueryVirtualMemory, &v13, (_DWORD *)a2 + 5);
  result = v13;
  *a2 = v13;
  return result;
}
