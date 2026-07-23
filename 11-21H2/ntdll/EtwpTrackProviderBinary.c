/*
 * XREFs of EtwpTrackProviderBinary @ 0x18008894C
 * Callers:
 *     EtwEventSetInformation @ 0x1800155D0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     EtwpTrackRegBinaryInfo @ 0x180088A1C (EtwpTrackRegBinaryInfo.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  NTSTATUS v5; // eax
  unsigned __int32 v6; // edi
  int UniqueThread; // r8d
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp+18h] BYREF

  v2 = ProviderHandleLookup(a1, (unsigned int)a1);
  v3 = v2;
  if ( !v2 || (v4 = HIDWORD(a1), !(_WORD)v4) || (_WORD)v4 != *(_WORD *)(v2 + 96) )
  {
    v6 = 6;
    goto LABEL_9;
  }
  InputBuffer = *(_QWORD *)(v2 + 88);
  v5 = NtTraceControl(EtwTrackBinaryCode, &InputBuffer, 8u, 0LL, 0, &ReturnLength);
  if ( v5 )
  {
    v6 = RtlNtStatusToDosError(v5);
    if ( !v6 )
      goto LABEL_7;
LABEL_9:
    RtlSetLastWin32Error(v6);
    return v6;
  }
  v6 = 0;
LABEL_7:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v3 + 64));
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v3 + 98) |= 0x8000u;
  *(_DWORD *)(v3 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v3);
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 64));
  return v6;
}
