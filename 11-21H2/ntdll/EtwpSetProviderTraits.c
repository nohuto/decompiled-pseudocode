/*
 * XREFs of EtwpSetProviderTraits @ 0x180015628
 * Callers:
 *     EtwEventSetInformation @ 0x1800155D0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(unsigned __int64 a1, __int64 a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  ULONG OutputBufferLength; // r15d
  __int64 v10; // rax
  _BYTE *v11; // rdi
  int v12; // r14d
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  _BYTE *Heap; // rax
  unsigned __int32 v16; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-79h] BYREF
  _QWORD InputBuffer[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v20; // [rsp+48h] [rbp-61h]
  _BYTE OutputBuffer[120]; // [rsp+50h] [rbp-59h] BYREF

  v6 = ProviderHandleLookup(a1, (unsigned int)a1);
  v7 = v6;
  if ( !v6 || (v8 = HIDWORD(a1), !(_WORD)v8) || (_WORD)v8 != *(_WORD *)(v6 + 96) )
  {
    v16 = 6;
LABEL_22:
    RtlSetLastWin32Error(v16);
    return v16;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  OutputBufferLength = 120;
  *(_DWORD *)(v7 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v10 = *(_QWORD *)(v7 + 88);
  v11 = OutputBuffer;
  v20 = a3;
  InputBuffer[1] = a2;
  v12 = 0;
  InputBuffer[0] = v10;
  while ( 1 )
  {
    v13 = NtTraceControl(EtwSetProviderTraitsCode, InputBuffer, 0x18u, v11, OutputBufferLength, &ReturnLength);
    v14 = v13;
    if ( v13 != -1073741789 )
      break;
    if ( v11 != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v11 = Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      goto LABEL_10;
    }
    if ( (unsigned int)++v12 >= 0x10 )
      goto LABEL_10;
  }
  if ( !v13 )
  {
    v16 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v16 = RtlNtStatusToDosError(v14);
  if ( v16 )
    goto LABEL_13;
LABEL_11:
  *(_WORD *)(v7 + 98) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(v7, v11);
LABEL_13:
  *(_DWORD *)(v7 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 64));
  if ( v11 && v11 != OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  if ( v16 )
    goto LABEL_22;
  return v16;
}
