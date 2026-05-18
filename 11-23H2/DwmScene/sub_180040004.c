/*
 * XREFs of sub_180040004 @ 0x180040004
 * Callers:
 *     sub_1800E682D @ 0x1800E682D (sub_1800E682D.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180040004(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
    return sub_180010574(v1);
  return result;
}
