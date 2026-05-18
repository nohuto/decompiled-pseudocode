/*
 * XREFs of sub_180021D78 @ 0x180021D78
 * Callers:
 *     sub_180021D6C @ 0x180021D6C (sub_180021D6C.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

__int64 __fastcall sub_180021D78(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B988(v1);
  return result;
}
