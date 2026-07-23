/*
 * XREFs of sub_14067DE4C @ 0x14067DE4C
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 * Callees:
 *     <none>
 */

__int64 sub_14067DE4C()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction_0(&v1);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
      return result;
    if ( v1 )
      return 3222863873LL;
  }
  return 0LL;
}
