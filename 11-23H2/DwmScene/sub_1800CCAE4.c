/*
 * XREFs of sub_1800CCAE4 @ 0x1800CCAE4
 * Callers:
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 */

__int64 *__fastcall sub_1800CCAE4(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    sub_180011520(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_18000E72C(&v5);
  }
  return a1;
}
