/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1409F8830
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403DFED0 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DFF70 (wcscpy_s.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 *     NtOpenKey @ 0x1407AC640 (NtOpenKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(PHANDLE KeyHandle)
{
  char v2; // si
  HANDLE v3; // rcx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  ULONG v6; // r15d
  __int64 Pool2; // r14
  _WORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  NTSTATUS v14; // eax
  ULONG v15; // edi
  ULONG i; // edx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-59h] BYREF
  HANDLE KeyHandlea; // [rsp+68h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+A8h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v29; // [rsp+C8h] [rbp+Fh]
  __int128 v30; // [rsp+D8h] [rbp+1Fh]

  Handle = 0LL;
  v2 = 0;
  KeyInformation = 0LL;
  ResultLength = 0;
  v29 = 0LL;
  KeyHandlea = 0LL;
  v30 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ValueName = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)KeyHandle[2]);
    v3 = *KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    NtClose(v3);
    v4 = NtOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v29) + 56;
    if ( v6 < DWORD2(v29) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v29) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(64LL, v6, 544826699LL);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = KeyHandle[2];
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( v8[v10 + 16] );
    v11 = 2 * (WORD4(v29) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v29) )
      goto LABEL_19;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( v8[v13 + 16] );
    if ( v11 < v13 )
      goto LABEL_19;
    do
      ++v9;
    while ( v8[v9 + 16] );
    if ( v11 < (unsigned __int64)DWORD2(v29) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, v12, 544826699LL);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v14 = NtSetValueKey(*KeyHandle, &ValueName, 0, 4u, KeyHandle + 1, 4u);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      v20 = NtEnumerateKey(*KeyHandle, i, KeyBasicInformation, (PVOID)Pool2, v6, &ResultLength);
      if ( v20 == -2147483622 )
        break;
      if ( v20 >= 0 )
      {
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)KeyHandle[2]);
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)(Pool2 + 16));
        v17 = -1LL;
        do
          ++v17;
        while ( DestinationString.Buffer[v17] );
        ObjectAttributes.Length = 48;
        DestinationString.Length = 2 * v17;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v18 = NtOpenKey(&KeyHandlea, 0x2001Fu, &ObjectAttributes);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        v19 = NtSetValueKey(KeyHandlea, &ValueName, 0, 4u, KeyHandle + 1, 4u);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(KeyHandlea);
      }
      ++v15;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *KeyHandle,
             0LL,
             (PIO_APC_ROUTINE)(KeyHandle + 3),
             (PVOID)1,
             (PIO_STATUS_BLOCK)(KeyHandle + 7),
             0x10000005u,
             1u,
             KeyHandle + 9,
             4u,
             1u);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)ExpExpirationThread,
               3221226090LL,
               0LL,
               0LL);
    if ( result >= 0 )
      return ZwClose(Handle);
  }
  return result;
}
