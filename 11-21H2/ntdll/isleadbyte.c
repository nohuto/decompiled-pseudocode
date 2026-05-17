/*
 * XREFs of isleadbyte @ 0x180097548
 * Callers:
 *     ReadString @ 0x18009CF54 (ReadString.c)
 *     _input_l @ 0x18009D2A0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
