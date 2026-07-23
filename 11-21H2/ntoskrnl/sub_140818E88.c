/*
 * XREFs of sub_140818E88 @ 0x140818E88
 * Callers:
 *     sub_140818DF4 @ 0x140818DF4 (sub_140818DF4.c)
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 * Callees:
 *     sub_14020DB30 @ 0x14020DB30 (sub_14020DB30.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A2C @ 0x1403B1A2C (sub_1403B1A2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140762A68 @ 0x140762A68 (sub_140762A68.c)
 *     sub_14080051C @ 0x14080051C (sub_14080051C.c)
 *     sub_1408005A0 @ 0x1408005A0 (sub_1408005A0.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140801C0C @ 0x140801C0C (sub_140801C0C.c)
 *     sub_140801D08 @ 0x140801D08 (sub_140801D08.c)
 *     sub_14080751C @ 0x14080751C (sub_14080751C.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     sub_1408193BC @ 0x1408193BC (sub_1408193BC.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_1409681E4 @ 0x1409681E4 (sub_1409681E4.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     sub_14098FBB0 @ 0x14098FBB0 (sub_14098FBB0.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140818E88(char a1)
{
  PVOID v2; // r14
  unsigned __int64 v3; // rbx
  PVOID v4; // r15
  unsigned __int64 v5; // rax
  int v6; // edi
  bool v7; // si
  int v8; // r11d
  int v9; // r11d
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // eax
  HANDLE v13; // rbx
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rsi
  void *Pool2; // rax
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  LARGE_INTEGER v21; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v26; // [rsp+98h] [rbp+27h]

  v21.QuadPart = 0LL;
  v18[0] = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v26 = 0;
  v24 = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  KeyValueInformation = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  ValueName = 0LL;
  sub_140762A68();
  sub_140762A68();
  sub_140762A68();
  sub_140762A68();
  sub_140762A68();
  sub_140762A68();
  v5 = sub_14020DB30(0);
  v6 = v5 >= 0x100000000LL ? 8 : 0;
  v7 = v5 >= 0x100000000LL;
  if ( !BYTE6(xmmword_140C23400) )
  {
    v6 = 22;
    v7 = 1;
  }
  if ( (unsigned __int8)sub_1408193BC(2LL)
    || (unsigned __int8)sub_1408193BC(1LL)
    || (unsigned __int8)sub_1408193BC(15LL) )
  {
    v6 = v8;
    v7 = 1;
  }
  if ( (unsigned __int8)sub_1408193BC(16LL) )
  {
    v6 = v9;
    LODWORD(KeyHandle) = -1073741637;
    goto LABEL_52;
  }
  if ( (unsigned __int8)sub_1408193BC(13LL) )
  {
    v6 = v10;
    v7 = 1;
  }
  if ( !a1 )
  {
    byte_140D069CD = 0;
    if ( FileObject )
    {
      if ( (unsigned int)sub_1409681E4() )
        sub_14098FBB0(*(HANDLE *)&MaxDataSize);
      ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
      ZwClose(*(HANDLE *)&MaxDataSize);
      ExFreePoolWithTag(qword_140C22BD8, 0x72626968u);
      memset(&MaxDataSize, 0, 0xD8uLL);
      v4 = qword_140C22C10;
      v2 = MemoryMap;
      BYTE8(xmmword_140C23400) = 0;
      byte_140C23416 = 0;
      byte_140C23412 = 0;
      v12 = sub_1408193F4(v11);
LABEL_51:
      LODWORD(KeyHandle) = v12;
      v3 = 0LL;
      if ( !v6 )
        goto LABEL_54;
      goto LABEL_52;
    }
LABEL_50:
    v12 = 0;
    goto LABEL_51;
  }
  if ( FileObject )
    goto LABEL_50;
  dword_140C22BE4 = 1601;
  dword_140C22C04 = 1;
  byte_140C22C01 = 0;
  dword_140C22C88 = 0;
  if ( (int)sub_1403B1A2C((__int64)&KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
    v13 = KeyHandle;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C22C04 = HIDWORD(KeyValueInformation);
      if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
        dword_140C22C04 = 1;
    }
    RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v13, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C22BE4 = HIDWORD(KeyValueInformation);
    }
    RtlInitUnicodeString(&v24, L"MultiPhaseResumeDisabled");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v13, &v24, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      byte_140C22C01 = HIDWORD(KeyValueInformation) == 1;
      dword_140C22C88 |= 0x20u;
    }
    ZwClose(v13);
  }
  byte_140D069CD = 1;
  if ( v7 )
  {
    v12 = -1073741637;
    goto LABEL_51;
  }
  v14 = sub_140801D08(0x13000uLL);
  v3 = v14;
  if ( !v14 )
  {
    v6 = 23;
LABEL_33:
    LODWORD(KeyHandle) = -1073741670;
    goto LABEL_52;
  }
  v15 = v14 + 0x200000;
  if ( (v14 & 0x1FFFFF) != 0 )
    v15 = (v14 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  if ( v15 - v14 >= 0xA000 )
    v15 = v14;
  sub_140801C0C(&v21, (unsigned __int8 *)v18);
  LODWORD(KeyHandle) = NaptrDnsRecordConvert_1(v21);
  if ( (int)KeyHandle >= 0 )
  {
    qword_140C22BE8 = v3;
    qword_140C22BF0 = v15;
    v3 = 0LL;
    Pool2 = (void *)ExAllocatePool2(64LL, 456LL, 1885433160LL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v6 = 24;
      goto LABEL_33;
    }
    MemoryMap = Pool2;
    v2 = 0LL;
    LODWORD(KeyHandle) = sub_14080751C();
    if ( (int)KeyHandle >= 0 )
    {
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(qword_1400156D8, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140C22C88 |= 0x10u;
        byte_140C22C01 = 1;
      }
      byte_140C23416 = v18[0];
      BYTE8(xmmword_140C23400) = 1;
      if ( !(_DWORD)InitSafeBootMode )
        byte_140C23412 = 1;
      if ( (BYTE8(xmmword_140C5AC60) & 1) == 0 )
        sub_1408005A0();
      goto LABEL_50;
    }
    v6 = 25;
  }
  else
  {
    v6 = 6;
  }
LABEL_52:
  sub_140810E2C(v6, 8, &KeyHandle, 4uLL);
  if ( v3 )
    sub_14080051C(v3);
LABEL_54:
  if ( v4 )
  {
    MmReturnChargesToLockPagedPool(v4, qword_140C22C18);
    ExFreePoolWithTag(v4, 0);
    memset(&qword_140C22C10, 0, 0x78uLL);
  }
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x70616D48u);
    MemoryMap = 0LL;
  }
  return (unsigned int)KeyHandle;
}
