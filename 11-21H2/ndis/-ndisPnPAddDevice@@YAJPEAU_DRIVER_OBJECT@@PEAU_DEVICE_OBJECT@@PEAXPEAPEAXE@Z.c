/*
 * XREFs of ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00344B0 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x1C005B410 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0033D30 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C00591A8 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B5F0 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C010DC74 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C010DD50 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C010E1C0 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C010E2B4 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01121F4 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115D8C (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0115F44 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisMiniBlockFromDriverObject @ 0x1C0115FF8 (ndisMiniBlockFromDriverObject.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C011FF8C (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0120E74 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisPnPAddDevice(
        struct _DRIVER_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        void *a3,
        void **a4,
        unsigned __int8 a5)
{
  NTSTATUS updated; // edi
  UNICODE_STRING *v10; // rbx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  unsigned __int8 v16; // cl
  LOGICAL CheckStamp[2]; // [rsp+30h] [rbp-A1h]
  bool v18; // [rsp+40h] [rbp-91h] BYREF
  bool v19; // [rsp+41h] [rbp-90h] BYREF
  KRegKey v20; // [rsp+48h] [rbp-89h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+50h] [rbp-81h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-79h] BYREF
  GUID Guid; // [rsp+60h] [rbp-71h] BYREF
  union _NET_LUID_LH v24; // [rsp+70h] [rbp-61h] BYREF
  void *v25; // [rsp+78h] [rbp-59h] BYREF
  struct _DEVICE_OBJECT *v26; // [rsp+80h] [rbp-51h]
  char v27; // [rsp+88h] [rbp-49h]
  int v28; // [rsp+8Ch] [rbp-45h]
  __int128 v29; // [rsp+90h] [rbp-41h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-31h]
  int v31; // [rsp+A8h] [rbp-29h]
  void *v32; // [rsp+B0h] [rbp-21h]
  unsigned __int8 v33[8]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-11h]

  DeviceRegKey = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      a2);
  updated = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_23;
  v20.m_ptr = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v20.m_ptr,
    DeviceRegKey);
  v18 = 0;
  v19 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&v20, &GuidString, &v18);
  if ( updated < 0 )
    goto LABEL_26;
  if ( !v18 )
  {
    updated = ndisCheckIfDeviceNeedsPseudoMigration(&v20, &GuidString, &v18);
    if ( updated < 0 )
      goto LABEL_26;
    if ( v18 )
      goto LABEL_29;
    updated = ndisCheckIfDeviceNeedsFullMigration(&v20, &GuidString, &v18);
    if ( updated < 0 )
      goto LABEL_26;
    if ( v18 )
      goto LABEL_29;
    updated = ndisCheckIfDeviceNeedsUpdates(&v20, &v18);
    if ( updated < 0 )
    {
LABEL_26:
      if ( GuidString )
        ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
      goto LABEL_22;
    }
    if ( !v18 )
    {
LABEL_12:
      v10 = (UNICODE_STRING *)GuidString;
      v25 = 0LL;
      v24.Value = 0LL;
      v33[1] = a5;
      v26 = 0LL;
      v27 = 0;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0;
      v33[0] = 0;
      v33[2] = 0;
      v34 = 0LL;
      v32 = a3;
      updated = RtlGUIDFromString(GuidString, &Guid);
      if ( updated >= 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v11,
            13,
            63,
            (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
            (__int64)&Guid);
        }
        if ( !a3 )
          goto LABEL_43;
        v15 = KRegKey::QueryValueBoolean(&v20, L"HardwareLoopback", v33, FailIfNotFound);
        v16 = v33[0];
        if ( v15 < 0 )
          v16 = 0;
        v33[0] = v16;
        updated = ndisWdfUpdateAddDeviceParameters(&v20, (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
        if ( updated >= 0 )
        {
LABEL_43:
          if ( ndisIfReadInterfaceAddDeviceParameters((struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid, a2) )
          {
            updated = -1073741823;
          }
          else
          {
            LODWORD(GuidString) = 0;
            KRegKey::QueryValueUlong(&v20, L"IMMiniport", (unsigned int *)&GuidString);
            KRegKey::QueryValueString(&v20, L"ComponentID", &v29);
            ndisTemporarilyScribbleNetLuidIndex(&v20, &v24);
            if ( Microsoft_Windows_NDISEnableBits < 0 )
              McTemplateK0z_EtwWriteTransfer(v12, &AddPnPDevice, v13, *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL));
            v34 = ndisMiniBlockFromDriverObject(a1);
            v26 = a2;
            wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
              &v25,
              v20.m_ptr);
            v20.m_ptr = 0LL;
            updated = ndisAddDevice(&Guid, a4);
          }
        }
      }
      NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x7274534Bu);
LABEL_22:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20.m_ptr);
LABEL_23:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        CheckStamp[0] = updated;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x40u,
          (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
          (char)a2,
          *(_QWORD *)CheckStamp);
      }
      return (unsigned int)updated;
    }
  }
LABEL_29:
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
  updated = ndisCheckAlwaysStartFlag(&v20, &v19);
  if ( updated < 0 )
    goto LABEL_26;
  if ( v19 )
    goto LABEL_12;
  if ( GuidString )
    ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20.m_ptr);
  return 3221226645LL;
}
