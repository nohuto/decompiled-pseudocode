/*
 * XREFs of wcscat_s @ 0x1403DFED0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x14080343C (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x140838680 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8830 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC3F8 (ExpCreateOutputSIGNATURE.c)
 *     AslPathToNetworkPathNt @ 0x140A55510 (AslPathToNetworkPathNt.c)
 *     VhdiMountVhdFile @ 0x140A734CC (VhdiMountVhdFile.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Src++;
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
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
