/*
 * XREFs of sub_180091EC8 @ 0x180091EC8
 * Callers:
 *     sub_180091564 @ 0x180091564 (sub_180091564.c)
 * Callees:
 *     sub_18009209C @ 0x18009209C (sub_18009209C.c)
 */

__int64 __fastcall sub_180091EC8(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18009209C(v1);
  return result;
}
