/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1406C5400
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x1403B08CC (PopOpenThermalLoggingKey.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411D88 (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406C5280 (WmipGetGuidSecurityDescriptor.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1407E6D80 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407F8004 (RtlpGetTimeZoneInfoHandle.c)
 *     PopOpenPersistedRegistryKey @ 0x14082258C (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x1408226A0 (PopInitHiberPersistedRegValues.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083ABF8 (IopUpdateSecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x14083B0CC (IopGetPersistedStateLocation.c)
 *     EtwpInitializeAutoLoggers @ 0x14083BDCC (EtwpInitializeAutoLoggers.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     SpRegOpenRedirectedKey @ 0x14085DC10 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x14085F174 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x14085F2E0 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085FE00 (WmipSaveGuidSecurityDescriptor.c)
 *     PiGetStateRootPath @ 0x1408716B0 (PiGetStateRootPath.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970EE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     CmpRecordShutdownStopTime @ 0x140A1192C (CmpRecordShutdownStopTime.c)
 *     PopInitializePowerButtonHold @ 0x140B520A4 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140B73B6C (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Pool2; // rdi
  NTSTATUS v11; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  PCWSTR v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG v19; // esi
  ULONG Length; // ebx
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_140C649C5 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A78D80[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140C649C5 = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_5;
      RtlInitUnicodeString(&DestinationString, SourceID);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v18;
      if ( v18 != -1073741772 )
      {
        if ( v18 < 0 )
          goto LABEL_5;
        if ( !CustomValue )
          CustomValue = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, CustomValue);
        v19 = BufferLengthIn;
        Length = BufferLengthIn + 16;
        if ( BufferLengthIn + 16 >= BufferLengthIn )
        {
          Pool2 = (WCHAR *)ExAllocatePool2(256LL, Length, 1885696883LL);
          if ( !Pool2 )
          {
            v11 = -1073741801;
            goto LABEL_5;
          }
          v21 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
          v11 = v21;
          if ( v21 < 0 )
          {
            if ( v21 != -2147483643 )
              goto LABEL_5;
          }
          else if ( *((_DWORD *)Pool2 + 1) != 1 )
          {
            v11 = -1073741788;
            goto LABEL_5;
          }
          v15 = *((_DWORD *)Pool2 + 2);
          ResultLength = v15;
          if ( v21 >= 0 && Pool2[((unsigned __int64)v15 >> 1) + 5] )
          {
            v22 = v15 + 2;
            ResultLength = v22;
            v15 += 2;
            if ( v19 < (unsigned int)v22 )
            {
              v11 = -2147483643;
            }
            else
            {
              Pool2[(v22 >> 1) + 5] = 0;
              v15 = ResultLength;
            }
          }
          if ( BufferLengthOut )
            *BufferLengthOut = v15;
          if ( v11 < 0 )
            goto LABEL_5;
          v16 = Pool2 + 6;
          goto LABEL_19;
        }
LABEL_31:
        v11 = -1073741675;
        goto LABEL_5;
      }
    }
  }
  if ( DefaultPath )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( DefaultPath[v13] );
    v14 = v13 + 1;
    v15 = 2 * v14;
    ResultLength = 2 * v14;
    if ( 2 * v14 >= v14 )
    {
      v11 = BufferLengthIn < v15 ? 0x80000005 : 0;
      if ( BufferLengthOut )
        *BufferLengthOut = v15;
      if ( v15 > BufferLengthIn )
        goto LABEL_5;
      v16 = DefaultPath;
LABEL_19:
      memmove(TargetPath, v16, v15);
      goto LABEL_5;
    }
    goto LABEL_31;
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
