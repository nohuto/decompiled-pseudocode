/*
 * XREFs of sub_140242104 @ 0x140242104
 * Callers:
 *     sub_14029AEF0 @ 0x14029AEF0 (sub_14029AEF0.c)
 * Callees:
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 */

__int64 __fastcall sub_140242104(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (a2 & 0x100008) == 0x100008 )
    _fxsave((void *)(a1 + 256));
  result = 1048640LL;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    result = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFC;
    if ( (MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFC) != 0 )
      return sub_1402423D0(*(int *)(a1 + 1248) + a1 + 720, (unsigned int)result);
  }
  return result;
}
