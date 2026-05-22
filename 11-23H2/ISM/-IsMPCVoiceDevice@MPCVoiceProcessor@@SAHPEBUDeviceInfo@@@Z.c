/*
 * XREFs of ?IsMPCVoiceDevice@MPCVoiceProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1801B2980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MPCVoiceProcessor::IsMPCVoiceDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 0x40000;
}
