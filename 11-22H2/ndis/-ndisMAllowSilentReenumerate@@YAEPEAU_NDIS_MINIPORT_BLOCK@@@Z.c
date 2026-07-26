/*
 * XREFs of ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135A30
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007EDAC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B64C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C011951C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

char __fastcall ndisMAllowSilentReenumerate(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  char v2; // di
  unsigned int Data; // [rsp+40h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+18h] BYREF
  HANDLE DeviceRegKey; // [rsp+50h] [rbp+20h] BYREF

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v2 = 0;
  DeviceRegKey = 0LL;
  Data = 0;
  KeyHandle = 0LL;
  if ( IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey) < 0 )
    goto LABEL_6;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    DeviceRegKey);
  if ( KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, (struct _UNICODE_STRING *)&stru_1C00D7E70, &Data) < 0 )
    goto LABEL_6;
  if ( Data )
  {
    --Data;
    if ( ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1C00D7E70, 0, 4u, &Data, 4u) >= 0 )
    {
      v2 = 1;
LABEL_6:
      KRegKey::~KRegKey((KRegKey *)&KeyHandle);
      return v2;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0;
}
