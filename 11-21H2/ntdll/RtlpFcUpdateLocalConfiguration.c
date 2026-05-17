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

__int64 __fastcall RtlpFcUpdateLocalConfiguration(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  int v13; // r9d
  _QWORD *v14; // r10
  int SystemInformation; // ebx
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  HANDLE *v18; // rdi
  unsigned __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[10]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[80]; // [rsp+B8h] [rbp-50h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, 0x48uLL);
  v9 = 3LL;
  if ( byte_18017A188 )
  {
    SystemInformation = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(a1, v6, v7, v8);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    {
      SystemInformation = -1073741608;
      goto LABEL_11;
    }
    v20 = *(_QWORD *)(a1 + 8 + 8 * (*(_QWORD *)(a1 + 8) & 1LL) + 168);
    if ( v20 >= a2 )
    {
      SystemInformation = 0;
    }
    else
    {
      RtlpFcBufferManagerReferenceBuffers(a1 + 8, &v20, v21);
      v10 = v21[0];
      v11 = 0;
      memset(&v21[1], 0, 24);
      do
      {
        v12 = (unsigned int)RtlpFcSectionTypeToBufferType(v11, v10);
        v11 = v13 + 1;
        *v14 = *(_QWORD *)(v10 + 24 * v12);
      }
      while ( v11 < 3 );
      RtlpFcBufferManagerDereferenceBuffers(a1 + 8, v10);
      SystemInformation = NtQuerySystemInformationEx(211LL, &v21[1], 24LL, v22, 80, 0LL);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = RtlpFcMapBuffers(v22, v23);
        if ( SystemInformation >= 0 )
          RtlpFcBufferManagerUpdateBuffers(a1 + 8, v22[0], v23);
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
LABEL_11:
  v16 = &v23[8];
  v17 = 3LL;
  do
  {
    if ( *v16 )
      NtUnmapViewOfSection(-1LL);
    v16 += 3;
    --v17;
  }
  while ( v17 );
  v18 = (HANDLE *)&v22[2];
  do
  {
    if ( *v18 )
      NtClose(*v18);
    v18 += 3;
    --v9;
  }
  while ( v9 );
  return (unsigned int)SystemInformation;
}
