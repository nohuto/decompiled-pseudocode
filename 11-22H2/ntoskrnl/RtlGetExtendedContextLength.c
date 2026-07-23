/*
 * XREFs of RtlGetExtendedContextLength @ 0x14030D250
 * Callers:
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D004 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578B80 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405807A4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetSetContextInternal @ 0x140724A70 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A069C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B81E8 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  ULONG64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v6);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v3);
  }
  return result;
}
