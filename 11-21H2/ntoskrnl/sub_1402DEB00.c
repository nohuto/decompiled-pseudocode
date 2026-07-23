/*
 * XREFs of sub_1402DEB00 @ 0x1402DEB00
 * Callers:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1402DEADC @ 0x1402DEADC (sub_1402DEADC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402DEB00(int a1, int a2)
{
  int v3; // ecx

  while ( a1 <= 787 )
  {
    if ( a1 >= 785 )
      return 1LL;
    if ( a1 <= 772 )
      return 0LL;
    if ( a1 <= 783 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  v3 = a1 - 788;
  return v3 && v3 == 1;
}
