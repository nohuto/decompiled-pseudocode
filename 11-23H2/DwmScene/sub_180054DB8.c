/*
 * XREFs of sub_180054DB8 @ 0x180054DB8
 * Callers:
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

void **__fastcall sub_180054DB8(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      sub_18000B988(v4);
  }
  return a1;
}
