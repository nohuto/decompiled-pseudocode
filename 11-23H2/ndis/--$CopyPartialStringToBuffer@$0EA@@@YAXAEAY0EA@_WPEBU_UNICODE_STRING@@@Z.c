/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C0120C2C
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x1C0120A90 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int128 *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, unsigned __int16 *a2)
{
  __int128 *result; // rax

  if ( *a2 >= 0x80u )
  {
    result = (__int128 *)*((_QWORD *)a2 + 1);
    xmmword_1C00F7270 = *result;
    xmmword_1C00F7280 = result[1];
    xmmword_1C00F7290 = result[2];
    xmmword_1C00F72A0 = result[3];
    xmmword_1C00F72B0 = result[4];
    xmmword_1C00F72C0 = result[5];
    xmmword_1C00F72D0 = result[6];
    xmmword_1C00F72E0 = result[7];
  }
  else
  {
    memset(&xmmword_1C00F7270, 0, 0x80uLL);
    return (__int128 *)memmove(&xmmword_1C00F7270, *((const void **)a2 + 1), *a2);
  }
  return result;
}
