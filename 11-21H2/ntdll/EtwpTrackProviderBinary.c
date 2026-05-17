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
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  ULONG v9; // edi
  int UniqueThread; // r8d
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = ProviderHandleLookup(a1, (unsigned int)a1);
  v3 = v2;
  if ( !v2 || (v4 = HIDWORD(a1), !(_WORD)v4) || (_WORD)v4 != *(_WORD *)(v2 + 96) )
  {
    v9 = 6;
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(v2 + 88);
  v5 = NtTraceControl(26LL, &v12, 8LL);
  if ( v5 )
  {
    v9 = RtlNtStatusToDosError(v5);
    if ( !v9 )
      goto LABEL_7;
LABEL_9:
    RtlSetLastWin32Error(v9);
    return v9;
  }
  v9 = 0;
LABEL_7:
  RtlAcquireSRWLockExclusive(v3 + 64, v6, v7, v8);
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v3 + 98) |= 0x8000u;
  *(_DWORD *)(v3 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v3);
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 64));
  return v9;
}
