/*
 * XREFs of wcscat_s @ 0x18009F700
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     _AppendCumulativeOverlayFilePath @ 0x180128D0C (_AppendCumulativeOverlayFilePath.c)
 *     _AppendStandardOverlayFilePath @ 0x180128DC8 (_AppendStandardOverlayFilePath.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v3; // r9
  wchar_t v4; // ax
  errno_t v5; // ebx

  if ( Destination && SizeInWords )
  {
    if ( Source )
    {
      v3 = Destination;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_12;
      }
      while ( 1 )
      {
        v4 = *Source++;
        *v3++ = v4;
        if ( !v4 )
          return 0;
        if ( !--SizeInWords )
        {
          v5 = 34;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_12:
      v5 = 22;
LABEL_13:
      *Destination = 0;
      invalid_parameter();
      return v5;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
