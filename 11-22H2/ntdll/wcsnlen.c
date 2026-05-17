/*
 * XREFs of wcsnlen @ 0x180094B40
 * Callers:
 *     _wcslwr_s @ 0x180090770 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x180090C70 (_wcsupr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800F9DA0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800F9E28 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800FADE0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FAFF0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    ++result;
  }
  return result;
}
