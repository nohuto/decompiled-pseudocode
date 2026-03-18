/*
 * XREFs of _RegRtlQueryValue @ 0x14077FC64
 * Callers:
 *     PnpGetServiceStartType @ 0x14067AEF8 (PnpGetServiceStartType.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpRegQueryValueIndirect @ 0x1406B89A0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406BE094 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CC2C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DA4DC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x14076CA78 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x14076CFE4 (_CmIsDeviceInContainer.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140787818 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140788D90 (DrvDbGetRegValueMappedProperty.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     IopGetOriginalServiceName @ 0x14081F4F4 (IopGetOriginalServiceName.c)
 *     _SysCtxOpenControlSet @ 0x140827DE0 (_SysCtxOpenControlSet.c)
 *     PipHardwareConfigGetIndex @ 0x14082E998 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _PnpCtxRegQueryValue @ 0x14082EB54 (_PnpCtxRegQueryValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140940290 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140946BB8 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140947E30 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14095C804 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x14095CC40 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140A27B38 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A2E2C4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140A2E760 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A2E90C (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A2EAB8 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A2FD74 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rsi
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  __int64 Pool2; // rax
  char *v12; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(256LL, Length, 1279739218LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    inited = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v14 = *a5;
      v15 = *((_DWORD *)v12 + 2);
      *a5 = v15;
      if ( v14 < v15 )
        inited = -1073741789;
      else
        memmove(a4, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v12 + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)inited;
}
