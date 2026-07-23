/*
 * XREFs of wcscat_s @ 0x18009B080
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x18001AD70 (RtlConvertSidToUnicodeString.c)
 *     _AppendCumulativeOverlayFilePath @ 0x18012EE8C (_AppendCumulativeOverlayFilePath.c)
 *     _AppendStandardOverlayFilePath @ 0x18012EF5C (_AppendStandardOverlayFilePath.c)
 * Callees:
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Destination && SizeInWords )
  {
    if ( Source )
    {
      v3 = Destination;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Source++;
        *v3++ = v6;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *Destination = 0;
      invalid_parameter();
      return v4;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
