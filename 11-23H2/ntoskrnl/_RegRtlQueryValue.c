/*
 * XREFs of _RegRtlQueryValue @ 0x1406CE868
 * Callers:
 *     PnpGetServiceStartType @ 0x14068F410 (PnpGetServiceStartType.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C93DC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x140795198 (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     _CmIsDeviceInContainer @ 0x14079B200 (_CmIsDeviceInContainer.c)
 *     _PnpRegQueryValueIndirect @ 0x1407BACB0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1407C5FA0 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080A434 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140810608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x140810BF0 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082AF70 (_CmDeviceClassesSubkeyCallback.c)
 *     IopGetOriginalServiceName @ 0x140835544 (IopGetOriginalServiceName.c)
 *     _SysCtxOpenControlSet @ 0x140855228 (_SysCtxOpenControlSet.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875BC4 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1408774BC (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1408776DC (_PnpCtxRegQueryValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088114C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140882A34 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140951F50 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x1409585D8 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140959B3C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140970728 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970B64 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970CE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140A659A0 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A6B6EC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140A6BB84 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A6BD30 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6BEDC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D1B4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041B040 (ZwQueryValueKey.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rsi
  NTSTATUS inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v16; // eax
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      v16 = *a5 + 12;
      if ( v16 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a5 + 12;
      Pool2 = ExAllocatePool2(256LL, v16, 1279739218LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)inited;
}
