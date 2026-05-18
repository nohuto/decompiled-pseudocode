/*
 * XREFs of sub_1800640AC @ 0x1800640AC
 * Callers:
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 *     sub_1800E7E7C @ 0x1800E7E7C (sub_1800E7E7C.c)
 * Callees:
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 */

__int64 __fastcall sub_1800640AC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013348(v2 + 16);
  return sub_180031794(a1);
}
