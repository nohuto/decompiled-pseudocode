/*
 * XREFs of TimeToDaysAndFraction @ 0x1800F07DC
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x1800F0570 (RtlTimeToElapsedTimeFields.c)
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800F0608 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x18007BE70 (RtlExtendedMagicDivide.c)
 */

unsigned __int64 __fastcall TimeToDaysAndFraction(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  int v7; // r11d

  v5 = RtlExtendedMagicDivide(*a1, Magic10000, 13);
  result = RtlExtendedMagicDivide(v5, Magic86400000, 26);
  *a2 = result;
  *a3 = v7 - 86400000 * result;
  return result;
}
