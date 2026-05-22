/*
 * XREFs of ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180055080
 * Callers:
 *     <none>
 * Callees:
 *     IsGetMPCInputPostProcessorPresent @ 0x1800581AC (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall MPCMouseProcessor::IsMPCMouseDevice(const struct DeviceInfo *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*((_BYTE *)a1 + 4) & 2) != 0 )
    return (unsigned __int8)IsGetMPCInputPostProcessorPresent(a1) != 0;
  return v1;
}
