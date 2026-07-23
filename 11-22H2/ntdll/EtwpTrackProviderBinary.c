/*
 * XREFs of EtwpTrackProviderBinary @ 0x18008490C
 * Callers:
 *     EtwEventSetInformation @ 0x18002FD40 (EtwEventSetInformation.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800849C8 (EtwpTrackRegBinaryInfo.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1)
{
  __int16 v1; // rbx^4
  __int64 v2; // rax
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  unsigned __int32 v5; // edi
  int UniqueThread; // r8d
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  __int64 InputBuffer; // [rsp+50h] [rbp+18h] BYREF

  v1 = WORD2(a1);
  v2 = ProviderHandleLookup(a1, a1);
  v3 = v2;
  if ( !v2 || v1 != *(_WORD *)(v2 + 84) )
  {
    v5 = 6;
    goto LABEL_10;
  }
  InputBuffer = *(_QWORD *)(v2 + 88);
  v4 = NtTraceControl(EtwTrackBinaryCode, &InputBuffer, 8u, 0LL, 0, &ReturnLength);
  if ( v4 )
  {
    v5 = RtlNtStatusToDosError(v4);
    if ( !v5 )
      goto LABEL_5;
LABEL_10:
    RtlSetLastWin32Error(v5);
    return v5;
  }
  v5 = 0;
LABEL_5:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v3 + 64));
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v3 + 86) |= 0x8000u;
  *(_DWORD *)(v3 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v3);
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 64));
  return v5;
}
