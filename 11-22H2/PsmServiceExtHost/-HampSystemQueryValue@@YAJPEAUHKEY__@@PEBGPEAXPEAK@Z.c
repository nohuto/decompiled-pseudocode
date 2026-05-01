/*
 * XREFs of ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180045DC4
 * Callers:
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18003637C (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180045D8C (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x18004E27C (-HampClientQueryReconnectTimeout@@YAKXZ.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x180070A7C (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemQueryValue(HKEY a1, const unsigned __int16 *a2, BYTE *lpData, unsigned int *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
