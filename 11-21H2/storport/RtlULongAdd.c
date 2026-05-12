/*
 * XREFs of RtlULongAdd @ 0x1C004F844
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C0021128 (RaUnitStreamsIoctl.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C004D4DC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004D658 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C004D828 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C0068DF8 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0068F10 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C0088E58 (PortPassThroughValidateNormalizedRequest.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0093BB0 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C0093F84 (PortPassThroughExValidateNormalizedRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
