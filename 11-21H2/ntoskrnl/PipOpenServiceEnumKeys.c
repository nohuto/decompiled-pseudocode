/*
 * XREFs of PipOpenServiceEnumKeys @ 0x14067B470
 * Callers:
 *     PiDevCfgVerifyService @ 0x14067996C (PiDevCfgVerifyService.c)
 *     IoOpenDriverRegistryKey @ 0x14067A670 (IoOpenDriverRegistryKey.c)
 *     PiProcessDriverInstance @ 0x14067ABD0 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipHardwareConfigActivateService @ 0x1406DF35C (PipHardwareConfigActivateService.c)
 *     IopGetOriginalServiceName @ 0x14081F4F4 (IopGetOriginalServiceName.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084EA70 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     PipGetDriverKsrGuid @ 0x140941490 (PipGetDriverKsrGuid.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140946900 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     IopCreateRegistryKeyEx @ 0x14067A8B0 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1407801B8 (_PnpCtxGetCachedNodeBaseKey.c)
 */

NTSTATUS __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v15; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  result = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 6LL, &v15);
  if ( result >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        if ( v12 )
          v13 = v12;
        v12 = (_QWORD *)*v13;
        if ( *v13 == *(_QWORD *)&PiPnpRtlCtx + 8LL || !v12 )
          return -1073741772;
        result = PnpCtxGetCachedNodeBaseKey(*(_QWORD *)&PiPnpRtlCtx, v12, 6LL, &v15);
        if ( result < 0 )
          break;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.RootDirectory = v15;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
      if ( result == -2147483622 )
        return -1073741772;
    }
    else
    {
LABEL_3:
      if ( result >= 0 )
      {
        if ( a4 || a5 )
        {
          *(_DWORD *)&v17.Length = 655368;
          v17.Buffer = L"Enum";
          if ( a5 )
          {
            v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v17, a2, 1u, 0LL);
          }
          else
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            ObjectAttributes.RootDirectory = KeyHandle;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = &v17;
            ObjectAttributes.Attributes = 576;
            v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
          }
          v11 = v10;
          if ( v10 < 0 )
          {
            ZwClose(KeyHandle);
            return v11;
          }
          if ( a4 )
            *a4 = Handle;
          else
            ZwClose(Handle);
        }
        if ( a3 )
          *a3 = KeyHandle;
        else
          ZwClose(KeyHandle);
        return 0;
      }
    }
  }
  return result;
}
