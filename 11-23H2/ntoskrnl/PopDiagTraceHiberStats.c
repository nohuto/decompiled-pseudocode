/*
 * XREFs of PopDiagTraceHiberStats @ 0x14098FA28
 * Callers:
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x14038A170 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x14098C1C0 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140AAA5C0 (PopSstDiagQueryResumeTimestamp.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // r14
  __int64 ResumeTimestamp; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rax
  int v11; // ecx
  int v12; // esi
  ULONG DataSize; // ebx
  ULONGLONG v14; // rax
  REGHANDLE v15; // rbx
  HANDLE DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]
  __int128 v20; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[480]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+258h] [rbp+150h] BYREF

  v20 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v0 = PopOpenPowerKey((__int64)DestinationString);
  v1 = DestinationString[0];
  if ( v0 < 0 )
    v1 = 0LL;
  DestinationString[0] = v1;
  ResumeTimestamp = PopSstDiagQueryResumeTimestamp();
  v3 = qword_140C3D3D0;
  qword_140C3D3D8 = ResumeTimestamp;
  dword_140C3D4DC = dword_140C3CFA4;
  dword_140C3D4D8 = dword_140C3D028;
  v19 = qword_140C3D3D0;
  LODWORD(qword_140C3D488) = PopQpcTimeInMs(&qword_140C3D2B8, &qword_140C3D2C0);
  qword_140C3D338 = (unsigned int)PopQpcTimeInMs(&qword_140C3D288, &qword_140C3D340);
  PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140C3D2F8, v3, (__int64)&v20);
  v4 = (unsigned __int64 *)v21;
  v18 = 59LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v21;
  v7 = &qword_14000A560;
  do
  {
    v8 = *(v7 - 1);
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
      v9 = (unsigned __int64 *)&v21[v8 - 8];
    else
      v9 = (unsigned __int64 *)((char *)&qword_140C3D2F8 + v8);
    if ( (*(_DWORD *)v7 & 2) != 0 )
      v10 = *v9;
    else
      v10 = *(unsigned int *)v9;
    *v4 = v10;
    v11 = *(_DWORD *)v7;
    if ( *(int *)v7 < 0 )
    {
      v10 /= v3;
      *v4 = v10;
    }
    if ( (v11 & 0x10000000) != 0 )
      *v4 = PpmConvertTime(v10, PopQpcFrequency, 0x3E8uLL);
    v12 = *(_DWORD *)v7 & 0x20;
    DataSize = v12 != 0 ? 8 : 4;
    if ( v1 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v7 - 2));
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, v12 != 0 ? 11 : 4, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v3 = v19;
    v7 += 3;
    p_Reserved->Reserved = 0;
    ++v4;
    p_Reserved += 4;
    --v18;
  }
  while ( v18 );
  qword_140C3D450 /= v3;
  qword_140C3D300 /= v3;
  v14 = 1000 * qword_140C3D3D8 / PopQpcFrequency - (unsigned int)qword_140C3D348 - (unsigned int)dword_140C3D350;
  qword_140C3D4E0 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C3D450, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C3D300, 4u);
    if ( qword_140C3D478 )
    {
      dword_140C3CF84 += PopQpcTimeInMs(&qword_140C3D2A8, &qword_140C3D480);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140C3CF84, 4u);
    }
    qword_140C3D4E8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140C3D4E8, 8u);
    LOBYTE(v14) = ZwClose(DestinationString[0]);
  }
  if ( PopDiagHandleRegistered )
  {
    v15 = PopDiagHandle;
    LOBYTE(v14) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v14 )
      LOBYTE(v14) = EtwWrite(v15, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x3Bu, &UserData);
  }
  return v14;
}
