/*
 * XREFs of VrpOutputBufferParameter @ 0x14068CCA0
 * Callers:
 *     VrpPostQueryKey @ 0x14068CA48 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
