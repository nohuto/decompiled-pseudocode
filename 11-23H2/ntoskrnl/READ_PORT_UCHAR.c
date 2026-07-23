/*
 * XREFs of READ_PORT_UCHAR @ 0x140372020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR __stdcall READ_PORT_UCHAR(PUCHAR Port)
{
  return __inbyte((unsigned __int16)Port);
}
