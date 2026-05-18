/*
 * XREFs of sub_180032E10 @ 0x180032E10
 * Callers:
 *     sub_180100AAD @ 0x180100AAD (sub_180100AAD.c)
 *     sub_180100DC5 @ 0x180100DC5 (sub_180100DC5.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180032908 @ 0x180032908 (sub_180032908.c)
 */

__int64 __fastcall sub_180032E10(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_180032908(v1 + 2);
    return sub_18000B998(v1);
  }
  return result;
}
