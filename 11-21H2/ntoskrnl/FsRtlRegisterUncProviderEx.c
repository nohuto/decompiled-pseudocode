/*
 * XREFs of FsRtlRegisterUncProviderEx @ 0x14092E2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408567A8 @ 0x1408567A8 (sub_1408567A8.c)
 */

NTSTATUS __stdcall FsRtlRegisterUncProviderEx(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirDevName,
        PDEVICE_OBJECT DeviceObject,
        FSRTL_UNC_PROVIDER_FLAGS Flags)
{
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = Flags;
  v5[0] = 16842760;
  return sub_1408567A8((__int64)RedirDevName, (__int64)DeviceObject, (__int64)v5, MupHandle);
}
