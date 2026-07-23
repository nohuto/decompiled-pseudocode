/*
 * XREFs of sub_140A92FF0 @ 0x140A92FF0
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 * Callees:
 *     <none>
 */

__int64 sub_140A92FF0()
{
  unsigned int v0; // eax
  __int64 result; // rax

  if ( (dword_140C29FC0 & 0x8000000) == 0 || !dword_140D575E4 )
    return 3221225474LL;
  if ( dword_140D575B0 && !dword_140D5F790[*((unsigned int *)KeGetCurrentPrcb() + 9)] )
  {
    if ( dword_140D4E024 == 15 )
    {
      v0 = 12;
    }
    else
    {
      if ( dword_140D4E024 != 6 )
      {
LABEL_10:
        result = 0LL;
        dword_140D5F790[*((unsigned int *)KeGetCurrentPrcb() + 9)] = 1;
        return result;
      }
      v0 = 192;
    }
    __writemsr(0x1D9u, v0);
    goto LABEL_10;
  }
  return 3221226538LL;
}
