/*
 * XREFs of RtlInitializeExtendedContext @ 0x14030D3B0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D1E4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578AF0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140580714 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A018C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B8138 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14030D880 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x14030DA40 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags(a2, &v8);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(a1, a2, a3, v5);
  }
  return result;
}
