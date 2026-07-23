/*
 * XREFs of CmpCloneHwProfile @ 0x140A10464
 * Callers:
 *     CmSetAcpiHwProfile @ 0x14084A614 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140B6660C (CmpCreateHardwareProfiles.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wtoi @ 0x1403D9F90 (_wtoi.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041B3B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14041B730 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x14041DDB0 (ZwQuerySecurityObject.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x140769420 (CmpRebuildKcbCache.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10C70 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x140A216A8 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCloneHwProfile(
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
  void *Pool2; // rdi
  ULONG v14; // edi
  int v15; // eax
  ULONG v16; // ebx
  HANDLE v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rdx
  __int64 CellFlat; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rdx
  __int64 CellPaged; // rax
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
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v49; // [rsp+E8h] [rbp-18h] BYREF
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
  GuidString = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v44 = 0LL;
  Handle = 0LL;
  Uuid = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  CmpInitializeDelayDerefContext(&v49);
  CmpInitializeThreadInfo((__int64)&v50);
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
      Pool2 = (void *)ExAllocatePool2(256LL, Length, 538987843LL);
      if ( !Pool2 || ZwQuerySecurityObject(v8, 4u, Pool2, Length, &Length) >= 0 )
        goto LABEL_11;
      ExFreePoolWithTag(Pool2, 0);
    }
    Pool2 = 0LL;
LABEL_11:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = Pool2;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v12 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
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
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
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
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUIDEx(&Uuid, &GuidString, 1u) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v40, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
                RtlFreeUnicodeString(&GuidString);
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
                  CmpLockRegistryExclusive();
                  v18 = v37;
                  v19 = Object[0];
                  v12 = CmpCopySyncTree(
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
                      CellFlat = HvpGetCellFlat(v21, v22, &v37);
                    else
                      CellFlat = HvpGetCellPaged(v21, v22, (unsigned int *)&v37);
                    v24 = CellFlat;
                    if ( CellFlat )
                    {
                      v25 = v18[1];
                      v26 = *(_QWORD *)(v25 + 32);
                      v27 = *(unsigned int *)(v25 + 40);
                      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                        CellPaged = HvpGetCellFlat(v26, v27, Object);
                      else
                        CellPaged = HvpGetCellPaged(v26, v27, (unsigned int *)Object);
                      if ( CellPaged )
                      {
                        *(_WORD *)(CellPaged + 52) = *(_WORD *)(v24 + 52);
                        *(_DWORD *)(CellPaged + 56) = *(_DWORD *)(v24 + 56);
                        CmpRebuildKcbCache(v18[1]);
                        v29 = *(_QWORD *)(v18[1] + 32LL);
                        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v29, Object);
                        else
                          HvpReleaseCellPaged(v29, (unsigned int *)Object);
                        v12 = 0;
                      }
                      else
                      {
                        v12 = -1073741670;
                      }
                      v30 = *(_QWORD *)(v19[1] + 32LL);
                      if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v30, &v37);
                      else
                        HvpReleaseCellPaged(v30, (unsigned int *)&v37);
                    }
                    else
                    {
                      v12 = -1073741670;
                    }
                  }
                  CmpDrainDelayDerefContext((_QWORD **)&v49);
                  CmpUnlockRegistry(v32, v31, v33, v34);
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
  CmCleanupThreadInfo((__int64 *)&v50);
  return (unsigned int)v12;
}
