/*
 * XREFs of sub_1800939A0 @ 0x1800939A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009209C @ 0x18009209C (sub_18009209C.c)
 */

__int64 *__fastcall sub_1800939A0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 *result; // rax

  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
    return sub_18009209C(v2, a2);
  return result;
}
