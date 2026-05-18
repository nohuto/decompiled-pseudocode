/*
 * XREFs of sub_1800317B8 @ 0x1800317B8
 * Callers:
 *     sub_18002E324 @ 0x18002E324 (sub_18002E324.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800317B8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
      sub_180010530(v3);
  }
  return sub_18003174C(a1);
}
