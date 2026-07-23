/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140B67484
 * Callers:
 *     ExInitSystemPhase2 @ 0x140B6740C (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403DBC30 (wcsncmp.c)
 *     wcscat_s @ 0x1403DFED0 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DFF70 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 *     NtOpenKey @ 0x1407AC640 (NtOpenKey.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x14084D578 (ExpGetNtProductTypeFromLicenseValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ExpLicenseWatchInitWorker @ 0x140B6791C (ExpLicenseWatchInitWorker.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B679E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 */

char ExpWatchProductTypeInitialization()
{
  __int64 v0; // rcx
  PVOID v1; // rsi
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  void *Pool2; // rax
  NTSTATUS v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  __int64 v14; // rax
  char v15; // r14
  __int64 v16; // rax
  HANDLE v17; // r12
  NTSTATUS v18; // eax
  ULONG v19; // r15d
  __int64 v20; // rsi
  bool v21; // di
  ULONG_PTR v22; // r14
  _DWORD *v23; // r13
  ULONG_PTR v24; // r8
  ULONG v25; // edx
  ULONG i; // r14d
  __int64 v27; // rax
  __int64 v28; // rdi
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  wchar_t *v31; // rax
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v37; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 KeyInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+F0h] [rbp-10h]
  __int128 v46; // [rsp+100h] [rbp+0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v48; // [rsp+11Ch] [rbp+1Ch]

  v0 = MmWriteableSharedUserData;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  ResultLength = 0;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  v1 = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  ExpSetupModeDetected = 0;
  v46 = 0LL;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(v0 + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&ExpSetupKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v2, 0LL, 0LL);
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v4 = Object;
  if ( v3 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v3, 0LL, 0LL);
  RtlInitUnicodeString(&ValueName, L"SetupType");
  v5 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v48 == 1 || v48 == 4 )
  {
    ExpSetupModeDetected = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = 0LL;
  }
  RtlInitUnicodeString(&ValueName, L"SystemSetupInProgress");
  v6 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v6, 0LL, 0LL);
  if ( v48 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v4;
    return 1;
  }
  qword_140C317F0 = (__int64)ExpWatchProductTypeWork;
  qword_140C317F8 = 0LL;
  *(_QWORD *)ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&ExpProductTypeKey, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v1 = Object;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v4;
    qword_140C31818 = v1;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    Pool2 = (void *)ExAllocatePool2(256LL, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = (__int64)Pool2;
    if ( Pool2 )
    {
      v10 = NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, Pool2, 0x22u, &ResultLength);
      if ( v10 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, &v46, 0x10u, &ResultLength) != -2147483643 )
          goto LABEL_18;
        ResultLength += 16;
        qword_140C70D48 = (PVOID)ExAllocatePool2(256LL, ResultLength, 0x2079654Bu);
        if ( !qword_140C70D48 )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpProductTypeKey,
               &ValueName,
               KeyValuePartialInformation,
               qword_140C70D48,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(qword_140C70D48, 0), qword_140C70D48 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_18:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            v14 = MmWriteableSharedUserData;
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(v14 + 612) = 3;
          }
          v12 = NtNotifyChangeKey(
                  ExpProductTypeKey,
                  0LL,
                  ExpWatchProductTypeWorkItem,
                  (PVOID)1,
                  &ExpProductTypeIoSb,
                  0x10000005u,
                  0,
                  &ExpProductTypeChangeBuffer,
                  4u,
                  1u);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v37 = 0;
              KeyInformation = 0LL;
              v15 = 0;
              v16 = -1LL;
              v44 = 0LL;
              v45 = 0LL;
              ValueName = 0LL;
              v42 = 0LL;
              do
                ++v16;
              while ( aRegistryMachin_163[v16] );
              ValueName.Length = 2 * (v16 + 64);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (wchar_t *)ExAllocatePool2(64LL, ValueName.Length, 0x2079654Bu);
              if ( !ValueName.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 3uLL, 0LL);
              v17 = KeyHandle;
              v18 = NtQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &v37);
              if ( v18 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v18, 1uLL, 0LL);
              v19 = 2 * DWORD2(v44) + 56;
              if ( v19 < DWORD2(v44) || v19 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v44) + 16) )
                v15 = 1;
              v20 = ExAllocatePool2(64LL, v19, 0x2079654Bu);
              if ( !v20 || v15 )
                KeBugCheckEx(0x9Au, 0x14uLL, v19, 4uLL, 0LL);
              LODWORD(Object) = DWORD2(v45) + 32;
              v21 = (unsigned int)(DWORD2(v45) + 32) < DWORD2(v45);
              v22 = (unsigned int)(DWORD2(v45) + 32);
              v23 = (_DWORD *)ExAllocatePool2(64LL, v22, 0x2079654Bu);
              if ( !v23 || v21 )
                KeBugCheckEx(0x9Au, 0x14uLL, v22, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v44);
              v24 = 80LL * DWORD1(v44);
              if ( v24 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v24, 6uLL, 0LL);
              ExpLicenseInfo = ExAllocatePool2(64LL, (unsigned int)v24, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v42, L"ConcurrentLimit");
              v25 = 0;
              for ( i = 0; ; v25 = i )
              {
                v34 = NtEnumerateKey(v17, v25, KeyBasicInformation, (PVOID)v20, v19, &v37);
                if ( v34 == -2147483622 )
                  break;
                if ( v34 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v34, 0LL, 0LL);
                *(_WORD *)(v20 + 2 * ((unsigned __int64)*(unsigned int *)(v20 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  ValueName.Buffer,
                  (unsigned __int64)ValueName.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, L"\\");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, (const wchar_t *)(v20 + 16));
                v27 = -1LL;
                do
                  ++v27;
                while ( ValueName.Buffer[v27] );
                ObjectAttributes.RootDirectory = 0LL;
                ValueName.Length = 2 * v27;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &ValueName;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v28 = 80LL * i;
                v29 = NtOpenKey((PHANDLE)(v28 + ExpLicenseInfo), 0x2001Fu, &ObjectAttributes);
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v29, 1uLL, 0LL);
                v30 = NtQueryValueKey(
                        *(HANDLE *)(v28 + ExpLicenseInfo),
                        &v42,
                        KeyValuePartialInformation,
                        v23,
                        (ULONG)Object,
                        &v37);
                if ( v30 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v30, 2uLL, 0LL);
                v31 = (wchar_t *)ExAllocatePool2(64LL, ValueName.Length, 0x2079654Bu);
                *(_QWORD *)(v28 + ExpLicenseInfo + 16) = v31;
                if ( !v31 )
                  KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 7uLL, 0LL);
                wcscpy_s(v31, (unsigned __int64)ValueName.Length >> 1, ValueName.Buffer);
                v32 = v28 + ExpLicenseInfo;
                *(_DWORD *)(v32 + 8) = v23[3];
                *(_QWORD *)(v32 + 48) = v32;
                *(_QWORD *)(v32 + 24) = 0LL;
                *(_QWORD *)(v32 + 40) = ExpWatchLicenseInfoWork;
                v33 = NtNotifyChangeKey(
                        *(HANDLE *)v32,
                        0LL,
                        (PIO_APC_ROUTINE)(v32 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v32 + 56),
                        0x10000005u,
                        1u,
                        (PVOID)(v32 + 72),
                        4u,
                        1u);
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v33, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag((PVOID)v20, 0);
              ExFreePoolWithTag(v23, 0);
              ExFreePoolWithTag(ValueName.Buffer, 0);
              NtClose(v17);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
