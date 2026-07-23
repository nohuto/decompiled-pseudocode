/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x1405E3FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D1D6C @ 0x1402D1D6C (sub_1402D1D6C.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  unsigned __int64 v2; // rax
  _DWORD *v3; // r11

  v2 = sub_1402D1D6C(Time->QuadPart, 0xD6BF94D5E57A42BDuLL, 23) - 0x2B6109100LL;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
