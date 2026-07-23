/*
 * XREFs of sub_14051D9E4 @ 0x14051D9E4
 * Callers:
 *     sub_14090A644 @ 0x14090A644 (sub_14090A644.c)
 * Callees:
 *     sub_14051CFB0 @ 0x14051CFB0 (sub_14051CFB0.c)
 *     sub_14090985C @ 0x14090985C (sub_14090985C.c)
 */

__int64 sub_14051D9E4()
{
  __int64 v0; // r10

  if ( (unsigned __int8)sub_14090985C() )
    return sub_14051CFB0(v0);
  else
    return 3221225485LL;
}
