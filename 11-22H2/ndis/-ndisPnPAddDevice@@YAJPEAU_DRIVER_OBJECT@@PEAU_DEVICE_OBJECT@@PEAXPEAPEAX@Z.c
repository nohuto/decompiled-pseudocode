/*
 * XREFs of ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002AF64
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0035E70 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x1C0060660 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B64C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C003540C (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035994 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C005E3F8 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E38 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ndisMiniBlockFromDriverObject @ 0x1C0118D54 (ndisMiniBlockFromDriverObject.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0118E58 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0119158 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C011949C (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C01195B8 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0119664 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01197E8 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0119D88 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C012BCE8 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C012CC44 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void *a3, void **a4)
{
  NTSTATUS updated; // edi
  UNICODE_STRING *v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  int ValueBoolean; // eax
  unsigned __int8 v15; // cl
  LOGICAL CheckStamp[2]; // [rsp+30h] [rbp-99h]
  bool v17; // [rsp+40h] [rbp-89h] BYREF
  bool v18; // [rsp+41h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+50h] [rbp-79h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-71h] BYREF
  GUID Guid; // [rsp+60h] [rbp-69h] BYREF
  union _NET_LUID_LH v23; // [rsp+70h] [rbp-59h] BYREF
  __int64 v24; // [rsp+78h] [rbp-51h] BYREF
  struct _DEVICE_OBJECT *v25; // [rsp+80h] [rbp-49h]
  char v26; // [rsp+88h] [rbp-41h]
  int v27; // [rsp+8Ch] [rbp-3Dh]
  __int128 v28; // [rsp+90h] [rbp-39h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A8h] [rbp-21h]
  void *v31; // [rsp+B0h] [rbp-19h]
  unsigned __int8 v32[8]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-9h]

  DeviceRegKey = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)a1,
      a2);
  updated = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_21;
  Handle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &Handle,
    DeviceRegKey);
  v17 = 0;
  v18 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&Handle, &GuidString, &v17);
  if ( updated < 0 )
    goto LABEL_24;
  if ( !v17 )
  {
    updated = ndisCheckIfDeviceNeedsPseudoMigration(&Handle, &GuidString, &v17);
    if ( updated < 0 )
      goto LABEL_24;
    if ( !v17 )
    {
      updated = ndisCheckIfDeviceNeedsFullMigration(&Handle, &GuidString, &v17);
      if ( updated < 0 )
        goto LABEL_24;
      if ( !v17 )
      {
        updated = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&Handle, &v17);
        if ( updated < 0 )
          goto LABEL_24;
        if ( !v17 )
          goto LABEL_12;
      }
    }
  }
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids);
  updated = ndisCheckAlwaysStartFlag((struct KRegKey *)&Handle, &v18);
  if ( updated < 0 )
  {
LABEL_24:
    if ( GuidString )
      ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
    if ( !Handle )
      goto LABEL_21;
    goto LABEL_27;
  }
  if ( v18 )
  {
LABEL_12:
    v9 = (UNICODE_STRING *)GuidString;
    v24 = 0LL;
    v23.Value = 0LL;
    v25 = 0LL;
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0;
    *(_WORD *)v32 = 0;
    v33 = 0LL;
    v31 = a3;
    updated = RtlGUIDFromString(GuidString, &Guid);
    if ( updated >= 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          13,
          63,
          (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
          (__int64)&Guid);
      }
      if ( !a3 )
        goto LABEL_48;
      ValueBoolean = KRegKey::QueryValueBoolean((KRegKey *)&Handle, L"HardwareLoopback", v32, FailIfNotFound);
      v15 = v32[0];
      if ( ValueBoolean < 0 )
        v15 = 0;
      v32[0] = v15;
      updated = ndisWdfUpdateAddDeviceParameters(
                  (struct KRegKey *)&Handle,
                  (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
      if ( updated >= 0 )
      {
LABEL_48:
        if ( !ndisIfReadInterfaceAddDeviceParameters((struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid, a2) )
        {
          LODWORD(GuidString) = 0;
          KRegKey::QueryValueUlong((KRegKey *)&Handle, L"IMMiniport", (unsigned int *)&GuidString);
          KRegKey::QueryValueString(&Handle, L"ComponentID", &v28);
          ndisTemporarilyScribbleNetLuidIndex((KRegKey *)&Handle, &v23);
          if ( Microsoft_Windows_NDISEnableBits < 0 )
            McTemplateK0z_EtwWriteTransfer(v11, &AddPnPDevice, v12, *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8LL));
          v33 = ndisMiniBlockFromDriverObject(a1);
          v25 = a2;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &v24,
            Handle);
          updated = ndisAddDevice(&Guid, a4);
          NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
          if ( v9 )
            ExFreePoolWithTag(v9, 0x7274534Bu);
          goto LABEL_21;
        }
        updated = -1073741823;
      }
    }
    NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x7274534Bu);
    if ( !Handle )
      goto LABEL_21;
LABEL_27:
    ZwClose(Handle);
LABEL_21:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      CheckStamp[0] = updated;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x40u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        (char)a2,
        *(_QWORD *)CheckStamp);
    }
    return (unsigned int)updated;
  }
  if ( GuidString )
    ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 3221226645LL;
}
