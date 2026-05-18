/*
 * XREFs of sub_1800DE0DC @ 0x1800DE0DC
 * Callers:
 *     sub_1800DD4D4 @ 0x1800DD4D4 (sub_1800DD4D4.c)
 *     sub_1800DE174 @ 0x1800DE174 (sub_1800DE174.c)
 *     sub_1800F1DB2 @ 0x1800F1DB2 (sub_1800F1DB2.c)
 *     sub_1800F1E0C @ 0x1800F1E0C (sub_1800F1E0C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800DE0DC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0xB0uLL);
  return result;
}
