/*
 * XREFs of sub_1402693A4 @ 0x1402693A4
 * Callers:
 *     sub_1406F2420 @ 0x1406F2420 (sub_1406F2420.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402693A4(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 16008);
  v2 = *(_QWORD *)(a1 + 17256);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}
