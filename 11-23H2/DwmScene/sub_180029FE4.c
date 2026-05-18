/*
 * XREFs of sub_180029FE4 @ 0x180029FE4
 * Callers:
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_1800C30C0 @ 0x1800C30C0 (sub_1800C30C0.c)
 *     sub_1800C3268 @ 0x1800C3268 (sub_1800C3268.c)
 *     sub_1800C3410 @ 0x1800C3410 (sub_1800C3410.c)
 *     sub_1800C35B8 @ 0x1800C35B8 (sub_1800C35B8.c)
 *     sub_1800C3760 @ 0x1800C3760 (sub_1800C3760.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180029FE4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = sub_180010530(v2);
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
