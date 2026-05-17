/*
 * XREFs of isleadbyte @ 0x180092548
 * Callers:
 *     ReadString @ 0x180098068 (ReadString.c)
 *     _input_l @ 0x1800983D0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
