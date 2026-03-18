/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14030D55C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14030D004 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140578B80 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405807A4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     NtCreateThread @ 0x1409ADD90 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
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
