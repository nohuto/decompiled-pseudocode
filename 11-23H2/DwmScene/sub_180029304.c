/*
 * XREFs of sub_180029304 @ 0x180029304
 * Callers:
 *     sub_180029084 @ 0x180029084 (sub_180029084.c)
 *     sub_18003FE7C @ 0x18003FE7C (sub_18003FE7C.c)
 *     sub_1800436E4 @ 0x1800436E4 (sub_1800436E4.c)
 *     sub_180084204 @ 0x180084204 (sub_180084204.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 *     sub_1800E4F06 @ 0x1800E4F06 (sub_1800E4F06.c)
 *     sub_1800EB25F @ 0x1800EB25F (sub_1800EB25F.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180029304(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x28uLL);
  return result;
}
