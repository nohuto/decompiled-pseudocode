/*
 * XREFs of sub_180017970 @ 0x180017970
 * Callers:
 *     sub_180015530 @ 0x180015530 (sub_180015530.c)
 * Callees:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 */

__int64 __fastcall sub_180017970(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180018010(v1);
  return result;
}
