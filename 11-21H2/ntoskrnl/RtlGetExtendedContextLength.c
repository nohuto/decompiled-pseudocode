/*
 * XREFs of RtlGetExtendedContextLength @ 0x140295190
 * Callers:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x140298420 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576820 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057C724 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetSetContextInternal @ 0x1407035C0 (PspGetSetContextInternal.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140704EF8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     PspSetContextState @ 0x1409B4D94 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x140297F80 (RtlpValidateContextFlags.c)
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
