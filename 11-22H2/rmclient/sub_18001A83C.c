/*
 * XREFs of sub_18001A83C @ 0x18001A83C
 * Callers:
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180014FB0 @ 0x180014FB0 (sub_180014FB0.c)
 *     HamSetCommitProperties @ 0x18001E540 (HamSetCommitProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A83C(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  return result;
}
