/*
 * XREFs of sub_18005CD2C @ 0x18005CD2C
 * Callers:
 *     sub_18010CCF1 @ 0x18010CCF1 (sub_18010CCF1.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_18005CD2C(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B998(v1);
  return result;
}
