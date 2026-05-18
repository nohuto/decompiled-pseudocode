/*
 * XREFs of sub_1800916AC @ 0x1800916AC
 * Callers:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 * Callees:
 *     sub_180092020 @ 0x180092020 (sub_180092020.c)
 */

__int64 *__fastcall sub_1800916AC(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_180092020();
  return a1;
}
