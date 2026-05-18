/*
 * XREFs of sub_18007CBF4 @ 0x18007CBF4
 * Callers:
 *     sub_18007C94C @ 0x18007C94C (sub_18007C94C.c)
 * Callees:
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 */

__int64 __fastcall sub_18007CBF4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800105A8(v1);
  return result;
}
