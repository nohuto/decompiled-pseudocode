/*
 * XREFs of sub_180025A78 @ 0x180025A78
 * Callers:
 *     sub_180024E9C @ 0x180024E9C (sub_180024E9C.c)
 *     sub_180024F9C @ 0x180024F9C (sub_180024F9C.c)
 * Callees:
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 */

__int64 __fastcall sub_180025A78(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013300(v2 + 40);
  return sub_1800259F4(a1);
}
