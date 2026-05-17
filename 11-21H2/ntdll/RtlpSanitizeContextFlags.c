/*
 * XREFs of RtlpSanitizeContextFlags @ 0x180035D70
 * Callers:
 *     RtlCaptureContext2 @ 0x1800A8410 (RtlCaptureContext2.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1800368AC (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax
  unsigned int *v4; // r11

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (*v4 & 0x100000) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *v4 = *v4 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return result;
}
