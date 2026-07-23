/*
 * XREFs of PipOpenServiceEnumKeys @ 0x14068E904
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x14068A0E0 (IoOpenDriverRegistryKey.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessDriverInstance @ 0x1407C1FF0 (PiProcessDriverInstance.c)
 *     IopGetOriginalServiceName @ 0x140835844 (IopGetOriginalServiceName.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140843AFC (PipDmgGetDriverDmarCompatLevel.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084930C (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140862E84 (PnpDriverLoadingFailed.c)
 *     PiGetServiceNameInfo @ 0x1408722A0 (PiGetServiceNameInfo.c)
 *     PiDevCfgVerifyService @ 0x140879A9C (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x14087C37C (PipHardwareConfigActivateService.c)
 *     PipGetDriverKsrGuid @ 0x1409533A0 (PipGetDriverKsrGuid.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958520 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EBBC (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406CEF6C (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1407DA768 (IopCreateRegistryKeyEx.c)
 */

NTSTATUS __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v14; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  __int128 v16; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  result = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 6LL, &v14);
  if ( result >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = v14;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( !v12 )
          v12 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        v12 = (_QWORD *)*v12;
        if ( v12 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v12 )
          return -1073741772;
        result = PnpCtxGetCachedNodeBaseKey(*(_QWORD *)&PiPnpRtlCtx, v12, 6LL, &v14);
        if ( result < 0 )
        {
          if ( result != -2147483622 )
            return result;
          return -1073741772;
        }
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      if ( result >= 0 )
      {
        if ( a4 || a5 )
        {
          LODWORD(v16) = 655368;
          *((_QWORD *)&v16 + 1) = L"Enum";
          if ( a5 )
          {
            v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v16, a2, 1, 0LL);
          }
          else
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            ObjectAttributes.RootDirectory = KeyHandle;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
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
