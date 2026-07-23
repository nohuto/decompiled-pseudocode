/*
 * XREFs of sub_14076E82C @ 0x14076E82C
 * Callers:
 *     sub_1406E4E14 @ 0x1406E4E14 (sub_1406E4E14.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 * Callees:
 *     sub_14076E854 @ 0x14076E854 (sub_14076E854.c)
 */

__int64 sub_14076E82C()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = sub_14076E854();
  result = 0LL;
  if ( v0 )
    return v0 + 16;
  return result;
}
