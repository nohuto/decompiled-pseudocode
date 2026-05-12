/*
 * XREFs of PmSetDeviceParameter @ 0x1C001EDF8
 * Callers:
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 * Callees:
 *     ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170 (-PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z.c)
 */

__int64 __fastcall PmSetDeviceParameter(struct _DEVICE_EXTENSION *a1, __int64 a2, int a3)
{
  NTSTATUS v3; // edi
  PCWSTR Path; // [rsp+48h] [rbp+10h] BYREF
  int ValueData; // [rsp+50h] [rbp+18h] BYREF

  ValueData = a3;
  Path = 0LL;
  v3 = PmOpenDeviceParameter(a1, (void **)&Path);
  if ( v3 >= 0 )
    v3 = RtlWriteRegistryValue(0x40000000u, Path, L"Attributes", 4u, &ValueData, 4u);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v3;
}
