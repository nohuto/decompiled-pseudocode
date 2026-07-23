/*
 * XREFs of sub_140B1BBE4 @ 0x140B1BBE4
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 */

__int64 sub_140B1BBE4()
{
  __int64 result; // rax

  sub_140B1CC84();
  MEMORY[0xFFFFF780000002E0] = -1;
  sub_140B1C0FC(0LL);
  ExpMicrocodeInitialization(2LL);
  result = (unsigned int)dword_140D068E8;
  if ( dword_140D3CA8C > (unsigned int)dword_140D068E8 )
    dword_140D3CA8C = dword_140D068E8;
  return result;
}
