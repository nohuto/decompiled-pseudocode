/*
 * XREFs of RtlGetExtendedContextLength @ 0x180034EC0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1800366B0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1800368AC (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r11d
  __int64 v5; // r8
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(a1, &v6);
  v5 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v4, a2, v5);
  }
  return result;
}
