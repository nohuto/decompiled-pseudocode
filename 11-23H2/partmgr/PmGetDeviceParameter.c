/*
 * XREFs of PmGetDeviceParameter @ 0x1C0022274
 * Callers:
 *     PmSetInitialDiskAttributes @ 0x1C0021F84 (PmSetInitialDiskAttributes.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170 (-PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z.c)
 */

__int64 __fastcall PmGetDeviceParameter(struct _DEVICE_EXTENSION *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  HANDLE v6; // rbx
  unsigned int RegistryValues; // edi
  _QWORD v9[14]; // [rsp+30h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+10h] BYREF

  Handle = 0LL;
  memset(v9, 0, sizeof(v9));
  v5 = PmOpenDeviceParameter(a1, &Handle);
  v6 = Handle;
  RegistryValues = v5;
  if ( v5 >= 0 )
  {
    v9[0] = 0LL;
    v9[2] = L"Attributes";
    LODWORD(v9[1]) = 292;
    v9[3] = a3;
    LODWORD(v9[4]) = 0x4000000;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v9);
  }
  if ( v6 )
    ZwClose(v6);
  return RegistryValues;
}
