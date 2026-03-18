/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14030D73C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14030D1E4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578AF0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140580714 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     NtCreateThread @ 0x1409ADCE0 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030DA40 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (*a1 & 0x100000) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = *a1 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return result;
}
