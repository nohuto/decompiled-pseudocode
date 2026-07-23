/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1406C5480
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x1403B005C (PopOpenThermalLoggingKey.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411338 (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FAB0 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406C5300 (WmipGetGuidSecurityDescriptor.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1407E7030 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407F83A4 (RtlpGetTimeZoneInfoHandle.c)
 *     PopOpenPersistedRegistryKey @ 0x140822548 (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x14082265C (PopInitHiberPersistedRegValues.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083C688 (IopUpdateSecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x14083CB5C (IopGetPersistedStateLocation.c)
 *     EtwpInitializeAutoLoggers @ 0x14083D85C (EtwpInitializeAutoLoggers.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     SpRegOpenRedirectedKey @ 0x14085DE30 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x14085F094 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x14085F200 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085FD20 (WmipSaveGuidSecurityDescriptor.c)
 *     PiGetStateRootPath @ 0x140871940 (PiGetStateRootPath.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     CmpRecordShutdownStopTime @ 0x140A1172C (CmpRecordShutdownStopTime.c)
 *     PopInitializePowerButtonHold @ 0x140B52018 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140B74864 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
  if ( byte_140C64AA5 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A78B40[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140C64AA5 = 1;
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
