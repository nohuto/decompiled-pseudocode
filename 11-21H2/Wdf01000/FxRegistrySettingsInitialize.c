/*
 * XREFs of FxRegistrySettingsInitialize @ 0x1C0027EF4
 * Callers:
 *     FxInitialize @ 0x1C0027E24 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0014DF4 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C0028478 (FxOverrideDefaultVerifierSettings.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C00287D8 (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C006B864 (FxDriverGlobalsInitializeDebugExtension.c)
 */

void __fastcall FxRegistrySettingsInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *WindowsVerifierOn,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  _DRIVER_OBJECT *m_DriverObject; // rcx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r9d
  int (__fastcall *SystemRoutineAddress)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *); // rax
  unsigned int v10; // eax
  bool v11; // zf
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned int v13; // edx
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  _FX_DRIVER_GLOBALS *v16; // rcx
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned int zero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int timeoutValue; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int allocateFailValue; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int verifierOnValue; // [rsp+3Ch] [rbp-C4h] BYREF
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int trackDriverForMiniDumpLog; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int requestParentOptimizationOn; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int defaultTrue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int verboseValue; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int verifyDownlevelValue; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int forceLogsInMiniDump; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int dsfValue; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int removeLockOptionFlags; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int max; // [rsp+68h] [rbp-98h] BYREF
  FxAutoRegKey hDriver; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING timeoutName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING FunctionName; // [rsp+A8h] [rbp-58h] BYREF
  _RTL_QUERY_REGISTRY_TABLE paramTable[10]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v40; // [rsp+328h] [rbp+228h]
  wchar_t v41; // [rsp+330h] [rbp+230h]
  wchar_t timeoutName_buffer[40]; // [rsp+340h] [rbp+240h] BYREF

  max = -1;
  v3 = a3;
  wcscpy(parametersPath_buffer, L"Wdf");
  m_DriverObject = FxDriverGlobals->DriverObject.m_DriverObject;
  parametersPath.Buffer = parametersPath_buffer;
  verifierOnValue = 0;
  verifyDownlevelValue = 0;
  verboseValue = 0;
  allocateFailValue = 0;
  forceLogsInMiniDump = 0;
  trackDriverForMiniDumpLog = 0;
  requestParentOptimizationOn = 0;
  dsfValue = 0;
  removeLockOptionFlags = 0;
  zero = 0;
  defaultTrue = 1;
  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  FunctionName = 0LL;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &hDriver) >= 0 )
  {
    ObjectAttributes.RootDirectory = hDriver.m_Key;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &parametersPath;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) < 0 )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v6, 9u) )
      {
        _FX_DRIVER_GLOBALS::SetVerifierState(v16, v3);
        if ( FxDriverGlobals->FxVerifierOn )
          FxDriverGlobalsInitializeDebugExtension(v17, 0LL);
      }
    }
    else
    {
      memset(paramTable, 0, sizeof(paramTable));
      allocateFailValue = -1;
      paramTable[0].Name = L"VerboseOn";
      paramTable[0].DefaultLength = 4;
      paramTable[0].EntryContext = &verboseValue;
      paramTable[1].DefaultLength = 4;
      paramTable[0].DefaultData = &zero;
      paramTable[0].Flags = 288;
      paramTable[1].Name = L"VerifierAllocateFailCount";
      paramTable[0].DefaultType = 0x4000000;
      paramTable[1].EntryContext = &allocateFailValue;
      paramTable[1].Flags = 288;
      paramTable[1].DefaultData = &max;
      paramTable[1].DefaultType = 0x4000000;
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, 0x120u, 9u) )
        verifierOnValue = v3;
      paramTable[2].Flags = v7;
      paramTable[2].Name = L"VerifierOn";
      paramTable[3].Flags = v7;
      paramTable[2].EntryContext = &verifierOnValue;
      paramTable[2].DefaultData = &verifierOnValue;
      paramTable[3].Name = L"VerifyDownLevel";
      paramTable[3].EntryContext = &verifyDownlevelValue;
      paramTable[3].DefaultData = &zero;
      paramTable[4].Name = L"ForceLogsInMiniDump";
      paramTable[4].EntryContext = &forceLogsInMiniDump;
      paramTable[4].DefaultData = &zero;
      paramTable[5].Name = L"TrackDriverForMiniDumpLog";
      paramTable[5].EntryContext = &trackDriverForMiniDumpLog;
      paramTable[5].DefaultData = &defaultTrue;
      paramTable[6].Name = L"RequestParentOptimizationOn";
      paramTable[6].EntryContext = &requestParentOptimizationOn;
      paramTable[6].DefaultData = &defaultTrue;
      paramTable[7].Name = L"DsfOn";
      paramTable[7].EntryContext = &dsfValue;
      paramTable[7].DefaultData = &zero;
      paramTable[8].Name = L"RemoveLockOptionFlags";
      paramTable[8].EntryContext = &removeLockOptionFlags;
      paramTable[4].Flags = v7;
      paramTable[5].Flags = v7;
      paramTable[6].Flags = v7;
      paramTable[7].Flags = v7;
      paramTable[8].Flags = v7;
      paramTable[8].DefaultData = &zero;
      paramTable[2].DefaultType = v8;
      paramTable[2].DefaultLength = 4;
      paramTable[3].DefaultType = v8;
      paramTable[3].DefaultLength = 4;
      paramTable[4].DefaultType = v8;
      paramTable[4].DefaultLength = 4;
      trackDriverForMiniDumpLog = 1;
      paramTable[5].DefaultType = v8;
      paramTable[5].DefaultLength = 4;
      requestParentOptimizationOn = 1;
      paramTable[6].DefaultType = v8;
      paramTable[6].DefaultLength = 4;
      paramTable[7].DefaultType = v8;
      paramTable[7].DefaultLength = 4;
      paramTable[8].DefaultType = v8;
      paramTable[8].DefaultLength = 4;
      RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = (int (__fastcall *)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))MmGetSystemRoutineAddress(&FunctionName);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlxQueryRegistryValues;
      if ( SystemRoutineAddress(3221225472u, (const wchar_t *)hWdf.m_Key, paramTable, 0LL, 0LL) >= 0 )
      {
        FxDriverGlobals->FxVerboseOn = verboseValue != 0;
        v10 = -1;
        if ( allocateFailValue != -1 )
          v10 = allocateFailValue;
        v11 = verifierOnValue == 0;
        FxDriverGlobals->WdfVerifierAllocateFailCount = v10;
        _FX_DRIVER_GLOBALS::SetVerifierState(FxDriverGlobals, !v11);
        if ( FxDriverGlobals->FxVerifierOn )
          FxDriverGlobalsInitializeDebugExtension(v12, hWdf.m_Key);
        FxDriverGlobals->FxVerifyDownlevel = verifyDownlevelValue != 0;
        FxOverrideDefaultVerifierSettings(hWdf.m_Key, (wchar_t *)L"VerifyOn", &FxDriverGlobals->FxVerifyOn);
        if ( FxDriverGlobals->FxVerifyOn )
          FxDriverGlobals->Public.DriverFlags |= 4u;
        FxOverrideDefaultVerifierSettings(
          hWdf.m_Key,
          (wchar_t *)L"DbgBreakOnError",
          &FxDriverGlobals->FxVerifierDbgBreakOnError);
        FxOverrideDefaultVerifierSettings(
          hWdf.m_Key,
          (wchar_t *)L"DbgBreakOnDeviceStateError",
          &FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError);
        if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
        {
          ObjectAttributes = *(_OBJECT_ATTRIBUTES *)L"DbgWaitForSignalTimeoutInSec";
          v41 = aDbgwaitforsign[28];
          timeoutValue = 0;
          *(_QWORD *)&ValueName.Length = 3801144LL;
          ValueName.Buffer = (wchar_t *)&ObjectAttributes;
          v40 = *(_QWORD *)L"nSec";
          if ( FxRegKey::_QueryULong(hWdf.m_Key, &ValueName, &timeoutValue) >= 0 )
            FxDriverGlobals->FxVerifierDbgWaitForSignalTimeoutInSec = timeoutValue;
        }
        wcscpy(timeoutName_buffer, L"DbgWaitForWakeInterruptIsrTimeoutInSec");
        timeoutValue = 0;
        *(_QWORD *)&timeoutName.Length = 5111884LL;
        timeoutName.Buffer = timeoutName_buffer;
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v13, 0xDu)
          && FxRegKey::_QueryULong(hWdf.m_Key, &timeoutName, &timeoutValue) >= 0 )
        {
          FxDriverGlobals->DbgWaitForWakeInterruptIsrTimeoutInSec = timeoutValue;
        }
        v11 = trackDriverForMiniDumpLog == 0;
        FxDriverGlobals->FxForceLogsInMiniDump = forceLogsInMiniDump != 0;
        v14 = !v11;
        v11 = requestParentOptimizationOn == 0;
        FxDriverGlobals->FxTrackDriverForMiniDumpLog = v14;
        v15 = !v11;
        v11 = dsfValue == 0;
        FxDriverGlobals->FxRequestParentOptimizationOn = v15;
        FxDriverGlobals->FxDsfOn = !v11;
        FxDriverGlobals->RemoveLockOptionFlags = removeLockOptionFlags;
      }
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
}
