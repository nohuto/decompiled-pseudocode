/*
 * XREFs of RtlGetExtendedContextLength @ 0x14030D430
 * Callers:
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D1E4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578AF0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140580714 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetSetContextInternal @ 0x140724A00 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A018C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B8138 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14030D790 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x14030DA40 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  v4 = a1;
  result = RtlpValidateContextFlags(a1, &v6);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(v4, a2, v3);
  }
  return result;
}
