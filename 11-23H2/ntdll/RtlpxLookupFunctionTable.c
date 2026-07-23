/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180020B00
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180002184 (EtwpProviderArrivalCallback.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x18001E4F4 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180020780 (RtlLookupFunctionEntry.c)
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckImageBase @ 0x180074418 (RtlGuardCheckImageBase.c)
 *     RtlPcToFileHeader @ 0x180076C90 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x18009F3F0 (RtlLookupFunctionTable.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD320 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlCaptureImageExceptionValues @ 0x18002C1BC (RtlCaptureImageExceptionValues.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x1800735EC (RtlpGetImageBaseViaQueryVirtualMemory.c)
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
  __int64 ImageBaseViaQueryVirtualMemory; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = LdrInitState == 3;
  v13 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v4 )
  {
    RtlAcquireSRWLockShared(&LdrpInvertedFunctionTableSRWLock);
    if ( LdrpInvertedFunctionTables != 1 )
    {
      v6 = 1;
      v7 = LdrpInvertedFunctionTables - 1;
      while ( v7 >= v6 )
      {
        v8 = (v7 + v6) >> 1;
        v9 = (char *)&xmmword_18019C530 + 24 * v8;
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
    if ( v2 || !byte_18019C52C )
      return v2;
  }
  ImageBaseViaQueryVirtualMemory = RtlpGetImageBaseViaQueryVirtualMemory(BaseAddress);
  a2[1] = ImageBaseViaQueryVirtualMemory;
  if ( !ImageBaseViaQueryVirtualMemory )
    return v2;
  RtlCaptureImageExceptionValues(ImageBaseViaQueryVirtualMemory, &v13, (char *)a2 + 20);
  result = v13;
  *a2 = v13;
  return result;
}
