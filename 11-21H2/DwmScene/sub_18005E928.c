/*
 * XREFs of sub_18005E928 @ 0x18005E928
 * Callers:
 *     sub_180103713 @ 0x180103713 (sub_180103713.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_18005E928(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B998(v1);
  return result;
}
