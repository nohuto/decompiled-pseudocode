/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011905C
 * Callers:
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A678 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B7DC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C0119408 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounters(struct _NDIS_MINIPORT_BLOCK *a1)
{
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  HANDLE DeviceRegKey; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  DeviceRegKey = 0LL;
  if ( IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 1u, &DeviceRegKey) < 0 )
  {
    KRegKey::~KRegKey((KRegKey *)&Handle);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
    ndisPcwEnableAlwaysOnCounterSet(a1, &Handle, 1LL);
    ndisPcwEnableAlwaysOnCounterSet(a1, &Handle, 2LL);
    if ( Handle )
      ZwClose(Handle);
  }
}
