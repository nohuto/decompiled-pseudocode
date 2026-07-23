/*
 * XREFs of sub_1405CE8D0 @ 0x1405CE8D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

void __fastcall __noreturn sub_1405CE8D0(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 168);
  sub_1405CAE6C(0x618uLL, a2, v2, 0LL);
}
