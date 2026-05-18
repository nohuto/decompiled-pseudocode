/*
 * XREFs of sub_180032DEC @ 0x180032DEC
 * Callers:
 *     sub_180101880 @ 0x180101880 (sub_180101880.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_180032DEC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B998(v1);
  return result;
}
