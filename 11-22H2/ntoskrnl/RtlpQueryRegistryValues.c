/*
 * XREFs of RtlpQueryRegistryValues @ 0x1406C5A80
 * Callers:
 *     WmipGetGuidSecurityDescriptor @ 0x1406C5300 (WmipGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 *     WmipQueryWmiDataBlock @ 0x1407ABB30 (WmipQueryWmiDataBlock.c)
 *     RtlQueryRegistryValues @ 0x1407E9DB0 (RtlQueryRegistryValues.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F8114 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14080B754 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14080C0B0 (EtwpGetAutoLoggerProviderFilter.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083D668 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     EtwStartAutoLogger @ 0x14083DD38 (EtwStartAutoLogger.c)
 *     RtlSetActiveTimeBias @ 0x140840F74 (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14084DB00 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408525D4 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     PspQueryForwardersEnabled @ 0x140855618 (PspQueryForwardersEnabled.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1408573DC (IopQueryPassiveInterruptRegistryOptions.c)
 *     VRegSetup @ 0x140858970 (VRegSetup.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x140861E94 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140879844 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x14087DDB0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14095D064 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EEB0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PpmRegisterSpmSettings @ 0x14099D6D0 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1409AD570 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1409AD60C (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x1409D94CC (SmKmRegParamsLoad.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1409E42A0 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E43C8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E46DC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpReadTimeZoneInformation @ 0x1409F8038 (ExpReadTimeZoneInformation.c)
 *     ExIsStateSeparationEnabled @ 0x1409F8CB8 (ExIsStateSeparationEnabled.c)
 *     ExpPcwDisabledStatus @ 0x140A01868 (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14041A900 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1406C5F04 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1406C5F84 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 */

__int64 RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, _QWORD *a3, __int64 a4, ...)
{
  __int64 v4; // rsi
  int v7; // r13d
  __int64 result; // rax
  int v9; // r13d
  const WCHAR *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  __int64 Length; // r15
  int *v16; // r12
  __int64 v17; // r8
  int v18; // eax
  const WCHAR *v19; // rdx
  int v20; // esi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r15d
  ULONG i; // esi
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // eax
  int ResultLength; // [rsp+30h] [rbp-71h]
  int ResultLengtha; // [rsp+30h] [rbp-71h]
  char v32; // [rsp+38h] [rbp-69h]
  ULONG v33; // [rsp+48h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-51h] BYREF
  ULONG v35[2]; // [rsp+58h] [rbp-49h]
  HANDLE Handle; // [rsp+60h] [rbp-41h] BYREF
  __int64 v37; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-11h] BYREF
  __int64 v42; // [rsp+118h] [rbp+77h] BYREF
  va_list va; // [rsp+118h] [rbp+77h]
  __int64 v44; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v42 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v4 = a4;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v33 = 0;
  v7 = a1;
  DestinationString = 0LL;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  LODWORD(v42) = result;
  if ( (int)result < 0 )
    return result;
  v9 = v7 & 0x40000000;
  if ( v9 )
    v10 = 0LL;
  else
    v10 = a2;
  RtlInitUnicodeString(&DestinationString, v10);
  v37 = 136LL;
  v12 = RtlpAllocDeallocQueryBuffer(&v37, 0LL, v11, (__int64 *)va);
  v13 = v12;
  if ( v12 )
  {
    v14 = v42;
    *(_DWORD *)(v12 + 8) = 0;
    LODWORD(Length) = 134;
    *(_QWORD *)v35 = 134LL;
    KeyHandle = Handle;
LABEL_6:
    v16 = (int *)(a3 + 1);
    v17 = 0LL;
    if ( !*a3 && (*v16 & 0x21) == 0 )
    {
LABEL_31:
      if ( Handle && !v9 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v13, v17, 0LL);
      return (unsigned int)v14;
    }
    v18 = *v16;
    if ( (*v16 & 0x20) != 0 && (!a3[2] || (v18 & 1) != 0 || *a3) )
    {
LABEL_76:
      v14 = -1073741811;
      goto LABEL_31;
    }
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
    }
    v19 = (const WCHAR *)a3[2];
    if ( (*v16 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_76;
      RtlInitUnicodeString(&DestinationString, v19);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
      if ( v14 < 0 )
        goto LABEL_31;
      if ( !*a3 )
        goto LABEL_23;
    }
    else
    {
      if ( v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        v20 = 0;
        while ( 1 )
        {
          v21 = v20++;
          if ( v21 > 4 )
          {
            DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
            goto LABEL_31;
          }
          v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v13, Length, &v33);
          if ( v14 == -2147483643 )
            v14 = -1073741789;
          LODWORD(v42) = v14;
          if ( v14 < 0 )
          {
            if ( v14 == -1073741772 )
            {
              v32 = v44;
              *(_DWORD *)(v13 + 4) = 0;
              *(_DWORD *)(v13 + 12) = 0;
              v33 = Length;
              v14 = RtlpCallQueryRegistryRoutine(
                      (_DWORD)KeyHandle,
                      (_DWORD)a3,
                      v13,
                      (unsigned int)&v33,
                      a4,
                      ResultLength,
                      v32);
              LODWORD(v42) = v14;
            }
            if ( v14 != -1073741789 )
              goto LABEL_22;
          }
          else
          {
            if ( *(_DWORD *)(v13 + 4) == 7 )
            {
              *(_WORD *)(v33 + v13) = 0;
              *(_DWORD *)(v13 + 12) += 2;
            }
            v33 = Length;
            v22 = RtlpCallQueryRegistryRoutine(
                    (_DWORD)KeyHandle,
                    (_DWORD)a3,
                    v13,
                    (unsigned int)&v33,
                    a4,
                    ResultLength,
                    v44);
            LODWORD(v42) = v22;
            v14 = v22;
            if ( v22 != -1073741789 )
            {
              if ( v22 < 0 )
                goto LABEL_31;
              if ( (*v16 & 0x40) != 0 )
                ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_22:
              v4 = a4;
LABEL_23:
              if ( v14 >= 0 )
              {
                a3 += 7;
                goto LABEL_6;
              }
              goto LABEL_31;
            }
          }
          v23 = v33 + 10LL;
          v37 = v23;
          v24 = RtlpAllocDeallocQueryBuffer(&v37, v13, v17, (__int64 *)va);
          v13 = v24;
          if ( !v24 )
          {
            v14 = v42;
            goto LABEL_31;
          }
          Length = v23 - 2;
          *(_DWORD *)(v24 + 8) = 0;
          v14 = v42;
          *(_QWORD *)v35 = Length;
        }
      }
      if ( (*v16 & 8) != 0 )
      {
        v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))*a3)(
                0LL,
                0LL,
                0LL,
                0LL,
                v4,
                a3[3]);
        goto LABEL_23;
      }
    }
    v25 = 0;
    for ( i = 0; ; ++i )
    {
      v14 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v13, v35[0], &v33);
      if ( v14 == -2147483643 )
        v14 = -1073741789;
      LODWORD(v42) = v14;
      if ( v14 == -2147483622 )
        break;
      if ( v14 >= 0 )
      {
        v33 = v35[0];
        v14 = RtlpCallQueryRegistryRoutine(
                (_DWORD)KeyHandle,
                (_DWORD)a3,
                v13,
                (unsigned int)&v33,
                a4,
                ResultLengtha,
                v44);
        LODWORD(v42) = v14;
      }
      if ( v14 == -1073741789 )
      {
        v27 = v33 + 10LL;
        v37 = v27;
        v28 = RtlpAllocDeallocQueryBuffer(&v37, v13, v17, (__int64 *)va);
        v13 = v28;
        if ( !v28 )
          goto LABEL_75;
        *(_DWORD *)(v28 + 8) = 0;
        --i;
        *(_QWORD *)v35 = v27 - 2;
        v29 = v25++;
        if ( v29 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
LABEL_75:
          v14 = v42;
LABEL_60:
          LODWORD(Length) = v35[0];
          goto LABEL_22;
        }
      }
      else
      {
        if ( v14 < 0 )
          goto LABEL_31;
        v25 = 0;
        if ( (*v16 & 0x40) != 0 )
        {
          ValueName.Buffer = (wchar_t *)(v13 + 20);
          ValueName.Length = *(_WORD *)(v13 + 16);
          ValueName.MaximumLength = *(_WORD *)(v13 + 16);
          if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
            --i;
        }
      }
    }
    if ( i || (v14 = -1073741772, (*v16 & 4) == 0) )
      v14 = 0;
    goto LABEL_60;
  }
  if ( !v9 )
    ZwClose(Handle);
  return (unsigned int)v42;
}
