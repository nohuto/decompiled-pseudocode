/*
 * XREFs of RtlGetDeviceFamilyInfoEnum @ 0x180078080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlGetDeviceFamilyInfoEnum(ULONGLONG *pullUAPInfo, DWORD *pulDeviceFamily, DWORD *pulDeviceForm)
{
  RtlpGetDeviceFamilyInfoEnum(pullUAPInfo, pulDeviceFamily, pulDeviceForm);
}
