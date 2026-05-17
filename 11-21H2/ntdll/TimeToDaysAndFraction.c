/*
 * XREFs of TimeToDaysAndFraction @ 0x1800820F0
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x180082010 (RtlTimeToElapsedTimeFields.c)
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800F0A58 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x180082190 (RtlExtendedMagicDivide.c)
 */

__int64 __fastcall TimeToDaysAndFraction(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // r11d

  v4 = a3;
  LOBYTE(a3) = 13;
  v5 = RtlExtendedMagicDivide(*a1, Magic10000, a3);
  LOBYTE(v6) = 26;
  result = RtlExtendedMagicDivide(v5, Magic86400000, v6);
  *a2 = result;
  *v4 = v8 - 86400000 * result;
  return result;
}
