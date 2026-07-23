/*
 * XREFs of sub_14091DBC4 @ 0x14091DBC4
 * Callers:
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wtoi @ 0x1403E17F0 (_wtoi.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091E3D0 @ 0x14091E3D0 (sub_14091E3D0.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_14091DBC4(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  PVOID v8; // r12
  unsigned int v10; // ecx
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v14; // edi
  int v15; // eax
  ULONG v16; // ebx
  HANDLE v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v37; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v40; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v44; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  PVOID v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  _LIST_ENTRY ListHead; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-8h] BYREF
  UUID Uuid; // [rsp+108h] [rbp+8h] BYREF
  _DWORD KeyInformation[2]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v53; // [rsp+128h] [rbp+28h]
  unsigned int v54; // [rsp+12Ch] [rbp+2Ch]
  wchar_t Str[2]; // [rsp+130h] [rbp+30h] BYREF
  ULONG v56; // [rsp+134h] [rbp+34h]
  wchar_t Dst[64]; // [rsp+220h] [rbp+120h] BYREF

  v37 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v8 = a3;
  DestinationString = 0LL;
  v40 = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  *(_OWORD *)Object = 0LL;
  Data = 0;
  *(_OWORD *)v47 = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v44 = 0LL;
  Handle = 0LL;
  Uuid = 0LL;
  ListHead = 0LL;
  v50 = 0LL;
  InitializeListHead(&ListHead);
  sub_140347770((__int64)&v50);
  v10 = *a7;
  if ( *a7 >= 0xC8 )
    goto LABEL_6;
  while ( 1 )
  {
    *a7 = v10 + 1;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    v12 = v11;
    if ( v11 < 0 )
      break;
    ZwClose(*KeyHandle);
    v10 = *a7;
    if ( *a7 >= 0xC8 )
      goto LABEL_6;
  }
  if ( v11 == -1073741772 )
  {
LABEL_6:
    if ( ZwQuerySecurityObject(v8, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( !PoolWithTag || ZwQuerySecurityObject(v8, 4u, PoolWithTag, Length, &Length) >= 0 )
        goto LABEL_11;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    PoolWithTag = 0LL;
LABEL_11:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v12 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v12 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwCreateKey(&v40, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v12 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v12 = ZwOpenKey(&v44, 0x20019u, &ObjectAttributes);
          if ( v12 >= 0 )
          {
            v12 = ZwQueryKey(v44, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v12 >= 0 )
            {
              v14 = v56;
              v15 = -1;
              Data = -1;
              v16 = 0;
              if ( v56 )
              {
                do
                {
                  if ( ZwEnumerateKey(v44, v16, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v54 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v54;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v54 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v44;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             KeyInformation,
                             0x100u,
                             &ResultLength) >= 0
                        && KeyInformation[1] == 4
                        && (*(_DWORD *)((char *)KeyInformation + v53) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v53);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v16;
                }
                while ( v16 < v14 );
                v15 = Data;
                v8 = v37;
              }
              Data = v15 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v40, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)sub_14091E3D0(a1, a5, *a7, Object) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v40, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
                RtlFreeUnicodeString((PUNICODE_STRING)Object);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v40, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v40, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && (int)sub_1407454A8(&Uuid.Data1, (__int64)v47, 1) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v40, &ValueName, 0, 1u, v47[1], WORD1(v47[0]));
                RtlFreeUnicodeString((PUNICODE_STRING)v47);
              }
              Object[0] = 0LL;
              v12 = ObReferenceObjectByHandle(v8, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
              if ( v12 >= 0 )
              {
                v17 = *KeyHandle;
                v37 = 0LL;
                v12 = ObReferenceObjectByHandle(v17, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v37, 0LL);
                if ( v12 >= 0 )
                {
                  sub_14071B6EC();
                  v18 = v37;
                  v19 = Object[0];
                  v12 = sub_14091EE14(
                          *(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL),
                          *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 40LL),
                          *(_QWORD *)(*((_QWORD *)v37 + 1) + 32LL),
                          *(_DWORD *)(*((_QWORD *)v37 + 1) + 40LL),
                          2,
                          0);
                  if ( v12 >= 0 )
                  {
                    v20 = v19[1];
                    v37 = (PVOID)0xFFFFFFFFLL;
                    Object[0] = (PVOID)0xFFFFFFFFLL;
                    v21 = *(_QWORD *)(v20 + 32);
                    v22 = *(unsigned int *)(v20 + 40);
                    if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
                      v23 = sub_1406BF400(v21, v22, &v37);
                    else
                      v23 = sub_1407C9820(v21, v22, (unsigned int *)&v37);
                    v24 = v23;
                    if ( v23 )
                    {
                      v25 = v18[1];
                      v26 = *(_QWORD *)(v25 + 32);
                      v27 = *(unsigned int *)(v25 + 40);
                      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                        v28 = sub_1406BF400(v26, v27, Object);
                      else
                        v28 = sub_1407C9820(v26, v27, (unsigned int *)Object);
                      if ( v28 )
                      {
                        *(_WORD *)(v28 + 52) = *(_WORD *)(v24 + 52);
                        *(_DWORD *)(v28 + 56) = *(_DWORD *)(v24 + 56);
                        sub_14071B3F0(v18[1]);
                        v29 = *(_QWORD *)(v18[1] + 32LL);
                        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
                          sub_1406BF450(v29, Object);
                        else
                          sub_1407C97C0(v29, (unsigned int *)Object);
                        v12 = 0;
                      }
                      else
                      {
                        v12 = -1073741670;
                      }
                      v30 = *(_QWORD *)(v19[1] + 32LL);
                      if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
                        sub_1406BF450(v30, &v37);
                      else
                        sub_1407C97C0(v30, (unsigned int *)&v37);
                    }
                    else
                    {
                      v12 = -1073741670;
                    }
                  }
                  sub_140346C60(&ListHead);
                  sub_140AB4260(v32, v31, v33, v34);
                }
              }
            }
          }
          else
          {
            v44 = 0LL;
          }
        }
        else
        {
          v40 = 0LL;
        }
      }
      else
      {
        v12 = 0;
      }
    }
  }
  ZwClose(v8);
  if ( v40 )
    ZwClose(v40);
  if ( v44 )
    ZwClose(v44);
  if ( v12 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  sub_14022EA30((__int64 *)&v50);
  return (unsigned int)v12;
}
