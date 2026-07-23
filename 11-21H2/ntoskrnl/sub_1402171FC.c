/*
 * XREFs of sub_1402171FC @ 0x1402171FC
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_140216C28 @ 0x140216C28 (sub_140216C28.c)
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 * Callees:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 */

__int64 __fastcall sub_1402171FC(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)dword_140D0689C;
  if ( (dword_140D0689C & 1) != 0 )
    return sub_14039DA34(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
