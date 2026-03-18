/*
 * XREFs of rimIsHidInputDevice @ 0x1C00E0FD2
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C017F574 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0183828 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2454);
  LOBYTE(v2) = *(_WORD *)(a2 + 44) != 0;
  return v2;
}
