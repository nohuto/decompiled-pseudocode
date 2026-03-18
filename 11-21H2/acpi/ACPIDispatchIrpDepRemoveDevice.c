/*
 * XREFs of ACPIDispatchIrpDepRemoveDevice @ 0x1C004CED0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0056F0C (ACPIInitResetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchIrpDepRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v4; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->IoStatus.Status = 0;
  v4 = DeviceExtension;
  IofCompleteRequest(a2, 0);
  ACPIInitResetDeviceExtension(v4);
  return 0LL;
}
