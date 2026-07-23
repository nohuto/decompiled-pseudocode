/*
 * XREFs of RtlGetExtendedContextLength @ 0x14030D6C0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D474 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578FE0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140580C04 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetSetContextInternal @ 0x140724C00 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x1407707E0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A037C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0648 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B8338 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14030DA20 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x14030DCD0 (RtlpValidateContextFlags.c)
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
