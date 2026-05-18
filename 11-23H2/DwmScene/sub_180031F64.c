/*
 * XREFs of sub_180031F64 @ 0x180031F64
 * Callers:
 *     sub_1800326C0 @ 0x1800326C0 (sub_1800326C0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180031F64(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    sub_180010530(v3);
  return sub_1800400BC(a1);
}
