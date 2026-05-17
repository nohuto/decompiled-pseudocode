/*
 * XREFs of EtwEventSetInformation @ 0x18002FD40
 * Callers:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // edx

  if ( !a2 )
  {
    if ( !a4 )
      return EtwpTrackProviderBinary();
    return 87LL;
  }
  v4 = a2 - 2;
  if ( !v4 )
  {
    if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
      return EtwpSetProviderTraits(a1, a3, (unsigned __int16)a4);
    return 87LL;
  }
  if ( v4 != 1 )
    return 50LL;
  if ( !a3 || a4 != 1 )
    return 87LL;
  return EtwpUseDescriptorType(a1, a3);
}
