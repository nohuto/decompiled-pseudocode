/*
 * XREFs of EtwpTrackProviderBinary @ 0x18008510C
 * Callers:
 *     EtwEventSetInformation @ 0x18002FB70 (EtwEventSetInformation.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800851C8 (EtwpTrackRegBinaryInfo.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1)
{
  __int16 v1; // rbx^4
  __int64 v2; // rax
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  ULONG v5; // edi
  int UniqueThread; // r8d
  char v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v1 = WORD2(a1);
  v2 = ProviderHandleLookup(a1, a1);
  v3 = v2;
  if ( !v2 || v1 != *(_WORD *)(v2 + 84) )
  {
    v5 = 6;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(v2 + 88);
  v4 = NtTraceControl(26LL, &v9, 8LL, 0LL, 0, &v8);
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
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v3 + 64));
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v3 + 86) |= 0x8000u;
  *(_DWORD *)(v3 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v3);
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 64));
  return v5;
}
