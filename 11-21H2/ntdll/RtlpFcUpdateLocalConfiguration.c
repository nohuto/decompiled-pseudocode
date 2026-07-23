/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x1800763A8
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180076890 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x1800B12B0 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFcMapBuffers @ 0x180076568 (RtlpFcMapBuffers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x180076670 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007674C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x180076950 (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x1800A6D80 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18012A1A0 (RtlpFcSectionTypeToBufferType.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // r8
  int v10; // r9d
  _QWORD *v11; // r10
  NTSTATUS v12; // ebx
  PVOID *v13; // rdi
  __int64 v14; // rsi
  HANDLE *v15; // rdi
  unsigned __int64 Value; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD InputBuffer[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD SystemInformation[10]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[80]; // [rsp+B8h] [rbp-50h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v20, 0, 0x48uLL);
  v6 = 3LL;
  if ( byte_18017A188 )
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
      RtlpFcBufferManagerReferenceBuffers(&SRWLock[1], &Value, InputBuffer);
      v7 = InputBuffer[0];
      v8 = 0;
      memset(&InputBuffer[1], 0, 24);
      do
      {
        v9 = (unsigned int)RtlpFcSectionTypeToBufferType(v8, v7);
        v8 = v10 + 1;
        *v11 = *(_QWORD *)(v7 + 24 * v9);
      }
      while ( v8 < 3 );
      RtlpFcBufferManagerDereferenceBuffers(&SRWLock[1], v7);
      v12 = NtQuerySystemInformationEx(
              SystemFeatureConfigurationSectionInformation,
              &InputBuffer[1],
              0x18u,
              SystemInformation,
              0x50u,
              0LL);
      if ( v12 >= 0 )
      {
        v12 = RtlpFcMapBuffers(SystemInformation, v20);
        if ( v12 >= 0 )
          RtlpFcBufferManagerUpdateBuffers(&SRWLock[1], SystemInformation[0], v20);
      }
    }
    RtlReleaseSRWLockExclusive(SRWLock);
  }
LABEL_11:
  v13 = (PVOID *)&v20[8];
  v14 = 3LL;
  do
  {
    if ( *v13 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v13);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v15 = (HANDLE *)&SystemInformation[2];
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
