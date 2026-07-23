/*
 * XREFs of ExpWatchProductTypeWork @ 0x1407AC220
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     CmSizeOfThreadInfo @ 0x140338350 (CmSizeOfThreadInfo.c)
 *     CmInitializeThreadInfo @ 0x140338360 (CmInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 *     NtOpenKey @ 0x1407AC640 (NtOpenKey.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // di
  char v1; // bl
  HANDLE v2; // r14
  LARGE_INTEGER *p_Interval; // rsi
  char v4; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r10
  const wchar_t *v14; // rax
  char *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // eax
  __int64 v21; // rcx
  ULONG_PTR v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rsp
  NTSTATUS v27; // eax
  ULONG *v28; // rbx
  NTSTATUS v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // rbx
  NTSTATUS result; // eax
  __int64 v37; // rcx
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+40h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+C0h] [rbp+70h] BYREF
  __int16 v46; // [rsp+E0h] [rbp+90h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Handle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v0 = 0;
  v1 = 0;
  ValueName = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  p_Interval = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v4 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v5 = NtOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v2 = ExpProductTypeKey;
    ExpProductTypeKey = KeyHandle;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v6 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v6 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v6 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v6 == -1073741670 );
      }
      if ( v6 >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_52;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_52:
          v13 = 1;
        v14 = L"WinNT";
        v15 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v13 )
        {
          v37 = ExpProductTypeValueInfo;
          v4 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v37 + 16) = KeyValueInformation[1];
          *(_WORD *)(v37 + 32) = v46;
        }
        v18 = (char *)((char *)KeyValueInformation + 12 - v15);
        while ( 1 )
        {
          v19 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v18[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_23;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v15] ? -1 : 1;
LABEL_23:
        v4 = v20 != 0 ? v4 : 0;
      }
      v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      if ( !qword_140D534E8 || (v23 = qword_140D534E8(v21), v22 = (unsigned int)v23, v23 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v22, 1uLL, 0LL);
      v24 = (unsigned int)CmSizeOfThreadInfo();
      v25 = v24 + 15;
      if ( v24 + 15 <= v24 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Interval = &Interval;
      CmInitializeThreadInfo((__int64)&Interval);
      CmpLockRegistryFreezeAware(1);
      v0 = 1;
      v27 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v27 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v27 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v27 == -1073741670 );
      }
      if ( v27 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v27, 1uLL, 0LL);
      v28 = (ULONG *)qword_140C70D48;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v28 )
      {
        v29 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v28[1], v28 + 3, v28[2]);
        if ( v29 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v29 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140C70D48 + 1),
                    (char *)qword_140C70D48 + 12,
                    *((_DWORD *)qword_140C70D48 + 2));
          }
          while ( v29 == -1073741670 );
        }
        if ( v29 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v29, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    while ( 1 )
    {
      v30 = NtNotifyChangeKey(
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
      v35 = v30;
      if ( v30 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v0 )
      CmpUnlockRegistry(v32, v31, v33, v34);
    if ( p_Interval )
      CmCleanupThreadInfo((__int64 *)p_Interval);
    if ( (v35 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v35, 4uLL, 0LL);
    v1 = v0;
    if ( !ExpSetupModeDetected
      && v4
      && (int)PsCreateSystemThreadEx(
                (__int64)&Handle,
                0x1FFFFF,
                0LL,
                0LL,
                0LL,
                (__int64)ExpExpirationThread,
                3221226090LL,
                0LL,
                0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  result = ExReleasePushLockEx((__int64 *)&ExpKeyManipLock, 0LL);
  if ( v2 )
  {
    if ( v1 )
      NtFlushKey(v2);
    return ObCloseHandle(v2, 0);
  }
  return result;
}
