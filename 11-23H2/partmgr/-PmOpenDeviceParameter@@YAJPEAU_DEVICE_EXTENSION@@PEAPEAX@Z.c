/*
 * XREFs of ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170
 * Callers:
 *     PmSetDeviceParameter @ 0x1C001EDF8 (PmSetDeviceParameter.c)
 *     ?PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z @ 0x1C0021DEC (-PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z.c)
 *     PmSetDeviceParameterBinary @ 0x1C00220DC (PmSetDeviceParameterBinary.c)
 *     PmGetDeviceParameter @ 0x1C0022274 (PmGetDeviceParameter.c)
 *     PmGetDeviceParameterBinary @ 0x1C0026A1C (PmGetDeviceParameterBinary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmOpenDeviceParameter(struct _DEVICE_EXTENSION *a1, void **a2)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v4; // ebx
  void *v5; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+88h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 3);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = IoOpenDeviceRegistryKey(v2, 1u, 0x20019u, &DeviceRegKey);
  if ( v4 < 0 )
  {
    DeviceRegKey = 0LL;
    v5 = KeyHandle;
  }
  else
  {
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Partmgr;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 < 0 )
    {
      KeyHandle = 0LL;
      goto LABEL_6;
    }
    v5 = 0LL;
    *a2 = KeyHandle;
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
LABEL_6:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v4;
}
