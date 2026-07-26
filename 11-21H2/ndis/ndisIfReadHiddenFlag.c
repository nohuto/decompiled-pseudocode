/*
 * XREFs of ndisIfReadHiddenFlag @ 0x1C010D764
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C010E340 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(NetSetupPropertyBag *this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  signed int v3; // ebx
  NTSTATUS result; // eax
  char v8; // dl
  const wchar_t *v9; // rax
  __int64 v10; // r8
  signed int v11; // ecx
  __int16 v12; // r8
  signed int v13; // eax
  KRegKey v14; // [rsp+20h] [rbp-20h] BYREF
  HANDLE DeviceRegKey; // [rsp+28h] [rbp-18h] BYREF
  struct _UNICODE_STRING v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00DC740, a3);
  v17 = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D1150, &v17) >= 0 )
  {
    if ( v17 )
      return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00DC740, a3);
  }
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  v14.m_ptr = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v14.m_ptr,
    DeviceRegKey);
  v18 = 0;
  v8 = 0;
  v16 = 0LL;
  v9 = L"Characteristics";
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = v10 == 0 ? 0xC000000D : 0;
  if ( v10 )
  {
    v12 = 2 * v10;
    v16.Buffer = L"Characteristics";
    v16.Length = -2 - v12;
    v16.MaximumLength = -v12;
  }
  if ( v11 >= 0 )
  {
    v13 = KRegKey::QueryValueUlong(&v14, &v16, &v18);
    v8 = v18;
    v11 = v13;
  }
  if ( v11 == -1073741772 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v14.m_ptr);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00DC740, a3);
  }
  if ( v11 )
    v3 = v11;
  else
    *a3 = (v8 & 8) != 0;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v14.m_ptr);
  return v3;
}
