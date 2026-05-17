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
  __int64 v9; // rax
  _BYTE *Heap; // rdi
  int v11; // r14d
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  ULONG v14; // ebx
  unsigned int v16; // [rsp+30h] [rbp-79h]
  _QWORD v17[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v18; // [rsp+48h] [rbp-61h]
  _BYTE v19[120]; // [rsp+50h] [rbp-59h] BYREF

  v6 = ProviderHandleLookup(a1, (unsigned int)a1);
  v7 = v6;
  if ( !v6 || (v8 = HIDWORD(a1), !(_WORD)v8) || (_WORD)v8 != *(_WORD *)(v6 + 96) )
  {
    v14 = 6;
LABEL_22:
    RtlSetLastWin32Error(v14);
    return v14;
  }
  RtlAcquireSRWLockExclusive(v6 + 64);
  *(_DWORD *)(v7 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(v19, 0, sizeof(v19));
  v9 = *(_QWORD *)(v7 + 88);
  Heap = v19;
  v18 = a3;
  v17[1] = a2;
  v11 = 0;
  v17[0] = v9;
  while ( 1 )
  {
    v12 = NtTraceControl(30LL, v17, 24LL);
    v13 = v12;
    if ( v12 != -1073741789 )
      break;
    if ( Heap != v19 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v16);
    if ( !Heap )
    {
      v13 = -1073741801;
      goto LABEL_10;
    }
    if ( (unsigned int)++v11 >= 0x10 )
      goto LABEL_10;
  }
  if ( !v12 )
  {
    v14 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v14 = RtlNtStatusToDosError(v13);
  if ( v14 )
    goto LABEL_13;
LABEL_11:
  *(_WORD *)(v7 + 98) |= 0x4000u;
  if ( v16 )
    EtwpUpdateEnableInfoAndCallback(v7, Heap);
LABEL_13:
  *(_DWORD *)(v7 + 80) = 0;
  RtlReleaseSRWLockExclusive(v7 + 64);
  if ( Heap && Heap != v19 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( v14 )
    goto LABEL_22;
  return v14;
}
