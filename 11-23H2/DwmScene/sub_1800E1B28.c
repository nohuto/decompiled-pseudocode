/*
 * XREFs of sub_1800E1B28 @ 0x1800E1B28
 * Callers:
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E1B28(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
