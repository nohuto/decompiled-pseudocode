/*
 * XREFs of sub_180031BFC @ 0x180031BFC
 * Callers:
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_180036F90 @ 0x180036F90 (sub_180036F90.c)
 *     sub_1800E60B6 @ 0x1800E60B6 (sub_1800E60B6.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

__int64 __fastcall sub_180031BFC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B988(v1);
  return result;
}
