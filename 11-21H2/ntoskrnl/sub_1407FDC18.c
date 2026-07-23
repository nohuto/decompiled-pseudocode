/*
 * XREFs of sub_1407FDC18 @ 0x1407FDC18
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A2C @ 0x1403B1A2C (sub_1403B1A2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_1407FE004 @ 0x1407FE004 (sub_1407FE004.c)
 *     sub_140A48D7C @ 0x140A48D7C (sub_140A48D7C.c)
 *     sub_140A53260 @ 0x140A53260 (sub_140A53260.c)
 */

char sub_1407FDC18()
{
  int v0; // eax
  HANDLE v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ebx
  int v12; // ebx
  ULONG DataSize; // esi
  unsigned __int64 v14; // rax
  REGHANDLE v15; // rbx
  unsigned __int64 v16; // rax
  HANDLE DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int128 v21; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v22[480]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+258h] [rbp+150h] BYREF

  v21 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v0 = sub_1403B1A2C((__int64)DestinationString);
  v1 = DestinationString[0];
  if ( v0 < 0 )
    v1 = 0LL;
  DestinationString[0] = v1;
  v2 = sub_140A48D7C();
  v3 = qword_140C22DF0;
  qword_140C22DF8 = v2;
  dword_140C22EFC = dword_140C22C04;
  dword_140C22EF8 = dword_140C22C88;
  v20 = qword_140C22DF0;
  LODWORD(qword_140C22EA8) = sub_140A53260(&qword_140C22CD8, &qword_140C22CE0);
  qword_140C22D58 = (unsigned int)sub_140A53260(&qword_140C22CA8, &qword_140C22D60);
  sub_1407FE004(&qword_140C22D18, v3, &v21);
  v4 = (unsigned __int64 *)v22;
  v19 = 59LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v7 = &qword_140001B30;
  do
  {
    v8 = (__int64 *)&v21;
    if ( (*(_DWORD *)v7 & 0x40000000) == 0 )
      v8 = &qword_140C22D18;
    v9 = (unsigned __int64 *)((char *)v8 + *(v7 - 1));
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
    {
      v16 = sub_14029394C(v10, qword_140D069F8, 0x3E8uLL);
      v11 = *(_DWORD *)v7;
      *v4 = v16;
    }
    v12 = v11 & 0x20;
    DataSize = v12 != 0 ? 8 : 4;
    if ( v1 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v7 - 2));
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, v12 != 0 ? 11 : 4, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v3 = v20;
    v7 += 3;
    p_Reserved->Reserved = 0;
    ++v4;
    p_Reserved += 4;
    --v19;
  }
  while ( v19 );
  qword_140C22E70 /= v3;
  qword_140C22D20 /= v3;
  v14 = 1000 * qword_140C22DF8 / (unsigned __int64)qword_140D069F8
      - (unsigned int)qword_140C22D68
      - (unsigned int)dword_140C22D70;
  qword_140C22F00 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C22E70, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C22D20, 4u);
    if ( qword_140C22E98 )
    {
      dword_140C22BE4 += sub_140A53260(&qword_140C22CC8, &qword_140C22EA0);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140C22BE4, 4u);
    }
    qword_140C22F08 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140C22F08, 8u);
    LOBYTE(v14) = ZwClose(DestinationString[0]);
  }
  if ( byte_140C5AE14 )
  {
    v15 = RegHandle;
    LOBYTE(v14) = EtwEventEnabled(RegHandle, &stru_14000EFE8);
    if ( (_BYTE)v14 )
      LOBYTE(v14) = EtwWrite(v15, &stru_14000EFE8, 0LL, 0x3Bu, &UserData);
  }
  return v14;
}
