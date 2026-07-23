/*
 * XREFs of sub_140654BB0 @ 0x140654BB0
 * Callers:
 *     sub_140A04C34 @ 0x140A04C34 (sub_140A04C34.c)
 * Callees:
 *     sub_140A03F90 @ 0x140A03F90 (sub_140A03F90.c)
 */

__int64 sub_140654BB0()
{
  __int64 result; // rax

  result = sub_140A03F90(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
