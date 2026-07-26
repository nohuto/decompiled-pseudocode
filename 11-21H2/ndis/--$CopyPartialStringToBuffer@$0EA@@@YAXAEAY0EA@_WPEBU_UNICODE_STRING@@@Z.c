/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C0115310
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x1C0115170 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int128 *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, unsigned __int16 *a2)
{
  __int128 *result; // rax

  if ( *a2 >= 0x80u )
  {
    result = (__int128 *)*((_QWORD *)a2 + 1);
    xmmword_1C00EE220 = *result;
    xmmword_1C00EE230 = result[1];
    xmmword_1C00EE240 = result[2];
    xmmword_1C00EE250 = result[3];
    xmmword_1C00EE260 = result[4];
    xmmword_1C00EE270 = result[5];
    xmmword_1C00EE280 = result[6];
    xmmword_1C00EE290 = result[7];
  }
  else
  {
    memset(&xmmword_1C00EE220, 0, 0x80uLL);
    return (__int128 *)memmove(&xmmword_1C00EE220, *((const void **)a2 + 1), *a2);
  }
  return result;
}
