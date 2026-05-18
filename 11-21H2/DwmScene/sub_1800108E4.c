/*
 * XREFs of sub_1800108E4 @ 0x1800108E4
 * Callers:
 *     sub_1800FF093 @ 0x1800FF093 (sub_1800FF093.c)
 *     sub_1800FFBA6 @ 0x1800FFBA6 (sub_1800FFBA6.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_1800108E4(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B998(v1);
  return result;
}
