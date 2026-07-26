/*
 * XREFs of ndisIfReadHiddenFlag @ 0x1C0118F48
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E518 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B64C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C011951C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB6C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(NetSetupPropertyBag *this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  char v7; // cl
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  HANDLE Handle; // [rsp+20h] [rbp-20h] BYREF
  HANDLE DeviceRegKey; // [rsp+28h] [rbp-18h] BYREF
  struct _UNICODE_STRING v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+48h] BYREF

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00E49E0, a3);
  v15 = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D8AB8, &v15) >= 0 )
  {
    if ( v15 )
      return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00E49E0, a3);
  }
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  Handle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &Handle,
    DeviceRegKey);
  v7 = 0;
  v16 = 0;
  v8 = L"Characteristics";
  v14 = 0LL;
  v9 = 0x7FFFLL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
  {
    v14.Buffer = L"Characteristics";
    v14.Length = 2 * (0x7FFF - v9);
    v14.MaximumLength = v14.Length + 2;
    v11 = KRegKey::QueryValueUlong((KRegKey *)&Handle, &v14, &v16);
    v7 = v16;
    v10 = v11;
  }
  if ( v10 == -1073741772 )
  {
    if ( Handle )
      ZwClose(Handle);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00E49E0, a3);
  }
  if ( v10 )
  {
    if ( Handle )
      ZwClose(Handle);
    return v10;
  }
  else
  {
    *a3 = (v7 & 8) != 0;
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return 0;
  }
}
