/*
 * XREFs of sub_18000D43C @ 0x18000D43C
 * Callers:
 *     sub_1800F2500 @ 0x1800F2500 (sub_1800F2500.c)
 * Callees:
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 */

__int64 __fastcall sub_18000D43C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000EE74(v1);
  return result;
}
