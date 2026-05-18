/*
 * XREFs of sub_18003FEB0 @ 0x18003FEB0
 * Callers:
 *     sub_18003EF54 @ 0x18003EF54 (sub_18003EF54.c)
 * Callees:
 *     sub_180040284 @ 0x180040284 (sub_180040284.c)
 */

__int64 __fastcall sub_18003FEB0(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180040284(v1);
  return result;
}
