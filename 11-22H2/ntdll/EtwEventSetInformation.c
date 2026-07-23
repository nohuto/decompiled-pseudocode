/*
 * XREFs of EtwEventSetInformation @ 0x18002FD40
 * Callers:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  __int32 v4; // edx

  if ( !InformationClass )
  {
    if ( !InformationLength )
      return EtwpTrackProviderBinary(RegHandle);
    return 87;
  }
  v4 = InformationClass - 2;
  if ( !v4 )
  {
    if ( EventInformation && InformationLength - 3 <= 0xFFFC )
      return EtwpSetProviderTraits(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    return 87;
  }
  if ( v4 != 1 )
    return 50;
  if ( !EventInformation || InformationLength != 1 )
    return 87;
  return EtwpUseDescriptorType(RegHandle, EventInformation);
}
