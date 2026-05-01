/*
 * XREFs of sub_18000CEA0 @ 0x18000CEA0
 * Callers:
 *     sub_18000CF64 @ 0x18000CF64 (sub_18000CF64.c)
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 * Callees:
 *     sub_18000D884 @ 0x18000D884 (sub_18000D884.c)
 */

__int64 __fastcall sub_18000CEA0(struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000D884(v1);
  return result;
}
