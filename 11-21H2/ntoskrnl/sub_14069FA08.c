/*
 * XREFs of sub_14069FA08 @ 0x14069FA08
 * Callers:
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 * Callees:
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 */

__int64 __fastcall sub_14069FA08(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0x80000) != 0 )
    return sub_14069FA30(a1);
  return result;
}
