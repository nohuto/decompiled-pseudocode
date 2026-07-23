/*
 * XREFs of RtlInitializeExtendedContext @ 0x14030D1D0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D004 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578B80 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405807A4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A069C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B81E8 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v5; // rbx
  NTSTATUS result; // eax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v8);
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v5);
  }
  return result;
}
