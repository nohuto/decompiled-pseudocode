/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x18007C4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x18007C4E0 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r11

  v2 = RtlExtendedMagicDivide(Time->QuadPart, Magic10000000, 23) - SecondsToStartOf1970;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
