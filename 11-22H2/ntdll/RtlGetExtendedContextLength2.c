/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x180054D00
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x1800547E0 (RtlUnwind.c)
 *     RtlGetExtendedContextLength @ 0x180054950 (RtlGetExtendedContextLength.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x18005501C (RtlpGetLegacyContextLength.c)
 *     RtlpGetEntireXStateAreaLength @ 0x180055064 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800550C4 (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int EntireXStateAreaLength; // eax
  int v11; // r11d
  int v12; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[36]; // [rsp+24h] [rbp-24h] BYREF
  ULONG64 v14; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  v15 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v13);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(ContextFlags, &v15, &v12);
    v7 = v12;
    v8 = v15 + 32;
    if ( (v13[0] & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v14 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
        RtlpRemoveArchDisallowedXStateFeatures(ContextFlags, &v14);
        EnabledExtendedFeatures = v14;
      }
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures);
      v8 = EntireXStateAreaLength + v11 - v7 - 448;
    }
    v9 = v8 + 32;
    if ( (v13[0] & 4) == 0 )
      v9 = v8;
    *ContextLength = v7 + v9 - 1;
    return 0;
  }
  return result;
}
