/*
 * XREFs of sub_140A9307C @ 0x140A9307C
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 * Callees:
 *     <none>
 */

__int64 sub_140A9307C()
{
  __int64 result; // rax

  if ( (dword_140C29FC0 & 0x8000000) == 0 || !dword_140D575E4 )
    return 3221225474LL;
  if ( !dword_140D575B0 || !dword_140D5F790[*((unsigned int *)KeGetCurrentPrcb() + 9)] )
    return 3221226538LL;
  __writemsr(0x1D9u, 0LL);
  result = 0LL;
  dword_140D5F790[*((unsigned int *)KeGetCurrentPrcb() + 9)] = 0;
  return result;
}
