/*
 * XREFs of HalpRegisterKdSupportFunctions @ 0x140B35F54
 * Callers:
 *     HalpDbgInitSystem @ 0x140A8F2C0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpRegisterKdSupportFunctions()
{
  __int64 *result; // rax

  off_140C01A20[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140C01A08[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140C01A18[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140C01A30[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140C01A38 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140C01A40 = (__int64)HalpKdReadPCIConfig;
  qword_140C01A48 = (__int64)HalpKdWritePCIConfig;
  off_140C01C38[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140C01A10[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01B18 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01D68[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &qword_140C60248;
  qword_140C60250 = (__int64)&qword_140C60248;
  qword_140C60248 = (__int64)&qword_140C60248;
  off_140C01B10[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
