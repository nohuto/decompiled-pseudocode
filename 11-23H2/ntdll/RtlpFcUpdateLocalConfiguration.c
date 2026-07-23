/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x1800713C8
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x1800B0E70 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1800712F4 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcMapBuffers @ 0x180071368 (RtlpFcMapBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1800716A8 (RtlpFcBufferManagerUpdateBuffers.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 *     RtlpFcSectionTypeToBufferType @ 0x180130338 (RtlpFcSectionTypeToBufferType.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  unsigned int v7; // r9d
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // r9d
  _QWORD *v11; // r10
  int v12; // ebx
  PVOID *v13; // rdi
  __int64 v14; // rsi
  HANDLE *v15; // rdi
  unsigned __int64 Value; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD InputBuffer[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD SystemInformation[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v20; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v22; // [rsp+C0h] [rbp-48h] BYREF

  memset_thunk_772440563353939046(SystemInformation, 0, 0x50uLL);
  memset_thunk_772440563353939046(v21, 0, 0x48uLL);
  v6 = 3LL;
  if ( byte_180187488 )
  {
    v12 = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
    {
      v12 = -1073741608;
      goto LABEL_11;
    }
    Value = SRWLock[(SRWLock[1].Value & 1) + 22].Value;
    if ( Value >= a2 )
    {
      v12 = 0;
    }
    else
    {
      RtlpFcBufferManagerReferenceBuffers((__int64 *)&SRWLock[1], &Value, InputBuffer);
      v7 = 0;
      memset(&InputBuffer[1], 0, 24);
      do
      {
        v8 = RtlpFcSectionTypeToBufferType(v7);
        v7 = v10 + 1;
        *v11 = *(_QWORD *)(v9 + 24LL * v8);
      }
      while ( v7 < 3 );
      RtlpFcBufferManagerDereferenceBuffers(&SRWLock[1], v9);
      v12 = NtQuerySystemInformationEx(
              SystemFeatureConfigurationSectionInformation,
              &InputBuffer[1],
              0x18u,
              SystemInformation,
              0x50u,
              0LL);
      if ( v12 >= 0 )
      {
        v12 = RtlpFcMapBuffers((__int64)SystemInformation, (__int64)v21);
        if ( v12 >= 0 )
          RtlpFcBufferManagerUpdateBuffers(&SRWLock[1], SystemInformation[0], v21);
      }
    }
    RtlReleaseSRWLockExclusive(SRWLock);
  }
LABEL_11:
  v13 = (PVOID *)&v22;
  v14 = 3LL;
  do
  {
    if ( *v13 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v13);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v15 = (HANDLE *)&v20;
  do
  {
    if ( *v15 )
      NtClose(*v15);
    v15 += 3;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v12;
}
