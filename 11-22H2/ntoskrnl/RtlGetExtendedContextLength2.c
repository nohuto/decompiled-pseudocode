/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x14030D5B0
 * Callers:
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1402A4180 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x14030D250 (RtlGetExtendedContextLength.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlUnwind @ 0x1403C4090 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x14076F910 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x14077070C (PspInitializeThunkContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x14030D8F0 (RtlpGetLegacyContextLength.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1403D6F40 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1403D74CC (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v12[3]; // [rsp+24h] [rbp-Ch] BYREF
  ULONG64 v13; // [rsp+70h] [rbp+40h] BYREF
  int v14; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0;
  v12[0] = 0;
  v11 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v14);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(ContextFlags, &v11, v12);
    v7 = v12[0];
    v8 = v11 + 32;
    if ( (v14 & 2) != 0 )
    {
      v10 = ~(v12[0] - 1) & (v8 + v12[0] - 1);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v13 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
        RtlpRemoveArchDisallowedXStateFeatures(ContextFlags, &v13);
        EnabledExtendedFeatures = v13;
      }
      v8 = RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures) + v10 - v7 - 448;
    }
    v9 = v8 + 32;
    if ( (v14 & 4) == 0 )
      v9 = v8;
    *ContextLength = v7 + v9 - 1;
    return 0;
  }
  return result;
}
