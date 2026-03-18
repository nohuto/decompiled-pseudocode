/*
 * XREFs of rimIsHidInputDevice @ 0x1C00E6476
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return *(_WORD *)(a2 + 44) != 0;
}
