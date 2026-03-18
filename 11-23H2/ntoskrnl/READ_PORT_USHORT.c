/*
 * XREFs of READ_PORT_USHORT @ 0x140371F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall READ_PORT_USHORT(PUSHORT Port)
{
  return __inword((unsigned __int16)Port);
}
