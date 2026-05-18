/*
 * XREFs of sub_180022FB0 @ 0x180022FB0
 * Callers:
 *     sub_1800230E0 @ 0x1800230E0 (sub_1800230E0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_180022FB0(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B998(v1);
  return result;
}
