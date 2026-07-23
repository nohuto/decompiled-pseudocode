/*
 * XREFs of EtwpSetProviderTraits @ 0x18002FBC8
 * Callers:
 *     EtwEventSetInformation @ 0x18002FB70 (EtwEventSetInformation.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v5; // rbx^4
  __int64 v6; // rax
  __int64 v7; // rsi
  ULONG OutputBufferLength; // r15d
  __int64 v9; // rax
  _BYTE *v10; // rdi
  int v11; // r14d
  NTSTATUS v12; // eax
  unsigned __int32 v13; // ebx
  _BYTE *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-79h] BYREF
  _QWORD InputBuffer[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v18; // [rsp+48h] [rbp-61h]
  _BYTE OutputBuffer[120]; // [rsp+50h] [rbp-59h] BYREF

  v5 = WORD2(a1);
  v6 = ProviderHandleLookup(a1, (unsigned int)a1);
  v7 = v6;
  if ( !v6 || v5 != *(_WORD *)(v6 + 84) )
  {
    v13 = 6;
LABEL_13:
    RtlSetLastWin32Error(v13);
    return v13;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  OutputBufferLength = 120;
  *(_DWORD *)(v7 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset_thunk_772440563353939046(OutputBuffer, 0, 0x78uLL);
  v9 = *(_QWORD *)(v7 + 88);
  v10 = OutputBuffer;
  InputBuffer[1] = a2;
  v11 = 0;
  InputBuffer[0] = v9;
  v18 = a3;
  while ( 1 )
  {
    v12 = NtTraceControl(EtwSetProviderTraitsCode, InputBuffer, 0x18u, v10, OutputBufferLength, &ReturnLength);
    v13 = v12;
    if ( v12 != -1073741789 )
      break;
    if ( v10 != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v10 = Heap;
    if ( !Heap )
    {
      v13 = -1073741801;
      goto LABEL_20;
    }
    if ( (unsigned int)++v11 >= 0x10 )
      goto LABEL_20;
  }
  if ( !v12 )
    goto LABEL_6;
LABEL_20:
  v13 = RtlNtStatusToDosError(v13);
  if ( v13 )
    goto LABEL_8;
LABEL_6:
  *(_WORD *)(v7 + 86) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(v7, v10);
LABEL_8:
  *(_DWORD *)(v7 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 64));
  if ( v10 && v10 != OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  if ( v13 )
    goto LABEL_13;
  return v13;
}
