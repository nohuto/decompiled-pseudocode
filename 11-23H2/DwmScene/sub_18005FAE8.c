/*
 * XREFs of sub_18005FAE8 @ 0x18005FAE8
 * Callers:
 *     sub_18005EF50 @ 0x18005EF50 (sub_18005EF50.c)
 * Callees:
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 */

__int64 __fastcall sub_18005FAE8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180032650(v2 + 16);
  return sub_18003174C(a1);
}
