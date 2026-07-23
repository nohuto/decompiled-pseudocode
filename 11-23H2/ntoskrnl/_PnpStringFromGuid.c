/*
 * XREFs of _PnpStringFromGuid @ 0x140788044
 * Callers:
 *     PiDcHandleDeviceEvent @ 0x140787510 (PiDcHandleDeviceEvent.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1407892D0 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmCacheDataEncode @ 0x14078D6D0 (PiDmCacheDataEncode.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407975BC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C57A0 (IoGetDeviceInterfaceAlias.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDcHandleInterfaceEvent @ 0x1407DB5B4 (PiDcHandleInterfaceEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiSwPdoPnPDispatch @ 0x140818DA0 (PiSwPdoPnPDispatch.c)
 *     PiDmListInitEnumCallback @ 0x14082F580 (PiDmListInitEnumCallback.c)
 *     _CmBuildDevicePanelId @ 0x140862F68 (_CmBuildDevicePanelId.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x140880AE0 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408829F0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A7AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x140B3B8BC (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
