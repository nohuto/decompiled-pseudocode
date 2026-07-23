/*
 * XREFs of sub_140B17304 @ 0x140B17304
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwOpenSection @ 0x14041BE40 (ZwOpenSection.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 *     sub_140B4DE9C @ 0x140B4DE9C (sub_140B4DE9C.c)
 */

NTSTATUS __fastcall sub_140B17304(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rsi
  ULONG v3; // r14d
  unsigned int v4; // ecx
  NTSTATUS result; // eax
  int v6; // edi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  KPCR *Pcr; // rax
  ULONG SecondLevelCacheSize; // r9d
  unsigned __int8 *v11; // rax
  int v12; // edx
  int v13; // ecx
  bool v14; // zf
  int v15; // ebx
  __int64 v16; // rax
  HANDLE Handle; // [rsp+40h] [rbp-F8h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-F0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-E8h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-A8h] BYREF
  int Data; // [rsp+A0h] [rbp-98h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-80h]
  UNICODE_STRING v26; // [rsp+C0h] [rbp-78h] BYREF
  UNICODE_STRING v27; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-58h] BYREF
  int v29; // [rsp+E8h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-48h] BYREF

  v1 = 0LL;
  v25 = a1;
  v28 = 0LL;
  Disposition = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v2 = a1;
  v26 = 0LL;
  v3 = 0;
  KeyHandle = 0LL;
  v4 = 0;
  v27 = 0LL;
  SectionHandle = 0LL;
  v29 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  DestinationString = 0LL;
  do
  {
    if ( v1 >= 0x54 )
      sub_140502A3C();
    *(_WORD *)((char *)&unk_140C49060 + v1) = 0;
    ++v4;
    v1 += 2LL;
  }
  while ( v4 < 0x2A );
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &stru_140D3CEC8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
  {
    Data = 1;
    RtlInitUnicodeString(&DestinationString, L"PhysicalAddressExtension");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  ObjectAttributes.ObjectName = &stru_140D3CD08;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v26, L"CentralProcessor");
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v26;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    ZwClose(KeyHandle);
    if ( Disposition == 1 )
    {
      qword_140D3CA40 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
      v6 = 0;
      if ( (_DWORD)dword_140D06884 )
      {
        while ( 1 )
        {
          v7 = qword_140D088C0[v6];
          v8 = dword_140D0E5E0[*(unsigned int *)(v7 + 36)];
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v8 >> 6);
          Affinity.Mask = 1LL << (v8 & 0x3F);
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          sub_140837688(v7, v6, (int)Handle);
          Pcr = KeGetPcr();
          if ( v6 )
          {
            SecondLevelCacheSize = Pcr->SecondLevelCacheSize;
            if ( *(_BYTE *)(v7 + 65) )
            {
              v11 = (unsigned __int8 *)(v7 + 35216);
              do
              {
                v12 = v11[qword_140D088C0[0] - v7];
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( v13 )
                byte_140C490B4 |= 1u;
              if ( SecondLevelCacheSize != v3 )
                byte_140C490B4 |= 4u;
              if ( *(_BYTE *)(v7 + 64) != *(_BYTE *)(qword_140D088C0[0] + 64) )
              {
LABEL_40:
                byte_140C490B4 |= 2u;
                goto LABEL_21;
              }
              v14 = *(_WORD *)(v7 + 66) == *(_WORD *)(qword_140D088C0[0] + 66);
            }
            else
            {
              v14 = *(_BYTE *)(qword_140D088C0[0] + 65) == 0;
            }
            if ( !v14 )
              goto LABEL_40;
          }
          else
          {
            v3 = Pcr->SecondLevelCacheSize;
          }
LABEL_21:
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          if ( ++v6 >= (unsigned int)dword_140D06884 )
          {
            v2 = v25;
            break;
          }
        }
      }
      if ( qword_140D3CA40 )
      {
        ExFreePoolWithTag(qword_140D3CA40, 0);
        qword_140D3CA40 = 0LL;
      }
    }
    RtlInitUnicodeString(&v27, L"\\Device\\PhysicalMemory");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v27;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes) >= 0 )
    {
      v15 = dword_140C15C70;
      if ( dword_140C15C70 == 1 )
        sub_140B17BA4(v2, SectionHandle, Handle);
      else
        sub_140B4DE9C(v2);
      v16 = sub_140213A40(v2, 1346584902, 0, 0);
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 8) > 1u )
        {
          LODWORD(v28) = *(unsigned __int16 *)(v16 + 109);
          v29 = *(_DWORD *)(v16 + 112);
          HIDWORD(v28) = *(unsigned __int8 *)(v16 + 45);
          if ( *(_BYTE *)(v16 + 8) > 1u )
          {
            RtlInitUnicodeString(&DestinationString, L"BootArchitecture");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v28, 4u);
            RtlInitUnicodeString(&DestinationString, L"PreferredProfile");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, (char *)&v28 + 4, 4u);
            RtlInitUnicodeString(&DestinationString, L"Capabilities");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v29, 4u);
          }
        }
      }
      if ( v15 == 1 )
        sub_140B179D4(SectionHandle, Handle);
      ZwClose(SectionHandle);
    }
    ZwClose(Handle);
    return 0;
  }
  return result;
}
