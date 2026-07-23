/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x14030DA20
 * Callers:
 *     RtlDispatchException @ 0x1402A4050 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1402A4530 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x14030D6C0 (RtlGetExtendedContextLength.c)
 *     RtlRaiseException @ 0x14030D820 (RtlRaiseException.c)
 *     RtlUnwind @ 0x1403C48D0 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x14076F5F0 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x1407703EC (PspInitializeThunkContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030DCD0 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x14030DD60 (RtlpGetLegacyContextLength.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1403D7780 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1403D7D0C (RtlpRemoveArchDisallowedXStateFeatures.c)
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
