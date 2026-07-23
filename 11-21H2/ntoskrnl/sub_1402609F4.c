/*
 * XREFs of sub_1402609F4 @ 0x1402609F4
 * Callers:
 *     sub_14025FF40 @ 0x14025FF40 (sub_14025FF40.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_14026099C @ 0x14026099C (sub_14026099C.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

unsigned __int64 *__fastcall sub_1402609F4(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)sub_1402828F0(64LL, 16 * a1 + 40, 1398238541LL);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
