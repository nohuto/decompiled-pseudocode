/*
 * XREFs of isleadbyte @ 0x180092D48
 * Callers:
 *     ReadString @ 0x180098868 (ReadString.c)
 *     _input_l @ 0x180098BD0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
