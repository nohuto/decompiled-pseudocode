/*
 * XREFs of sub_18003B3AC @ 0x18003B3AC
 * Callers:
 *     sub_1800E6242 @ 0x1800E6242 (sub_1800E6242.c)
 *     sub_1800E6254 @ 0x1800E6254 (sub_1800E6254.c)
 * Callees:
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 */

__int64 __fastcall sub_18003B3AC(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = sub_180032650(i);
  return result;
}
