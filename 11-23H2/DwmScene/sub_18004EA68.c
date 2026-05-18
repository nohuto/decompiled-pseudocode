/*
 * XREFs of sub_18004EA68 @ 0x18004EA68
 * Callers:
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 * Callees:
 *     sub_18004EB70 @ 0x18004EB70 (sub_18004EB70.c)
 */

__int64 __fastcall sub_18004EA68(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004EB70(v2 + 32);
  return sub_18003FDD0(a1);
}
