/*
 * XREFs of PmGetDeviceParameterBinary @ 0x1C0026A1C
 * Callers:
 *     PmInitializeAttributesTableCache @ 0x1C000E2A0 (PmInitializeAttributesTableCache.c)
 *     PmInitializePartitionTableCache @ 0x1C000F9CC (PmInitializePartitionTableCache.c)
 *     PmInitializeSnapshotDataCache @ 0x1C000FCA0 (PmInitializeSnapshotDataCache.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170 (-PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z.c)
 */

__int64 __fastcall PmGetDeviceParameterBinary(struct _DEVICE_EXTENSION *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // eax
  HANDLE v9; // rbx
  unsigned int RegistryValues; // edi
  _QWORD v12[14]; // [rsp+30h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+18h] BYREF

  Handle = 0LL;
  memset(v12, 0, sizeof(v12));
  *a3 = 0LL;
  *a4 = 0;
  v8 = PmOpenDeviceParameter(a1, &Handle);
  v9 = Handle;
  RegistryValues = v8;
  if ( v8 >= 0 )
  {
    v12[0] = PmGetDeviceParameterBinaryCallback;
    LODWORD(v12[1]) = 260;
    v12[2] = a2;
    v12[3] = a3;
    LODWORD(v12[4]) = 50331648;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v12);
  }
  if ( v9 )
    ZwClose(v9);
  return RegistryValues;
}
