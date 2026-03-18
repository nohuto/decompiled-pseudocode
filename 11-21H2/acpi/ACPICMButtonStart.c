/*
 * XREFs of ACPICMButtonStart @ 0x1C00901C0
 * Callers:
 *     ACPICMPowerButtonStart @ 0x1C008F020 (ACPICMPowerButtonStart.c)
 *     ACPICMSleepButtonStart @ 0x1C008F040 (ACPICMSleepButtonStart.c)
 *     ACPICMExperienceButtonStart @ 0x1C00ACE70 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C00ACFB0 (ACPICMLidStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
