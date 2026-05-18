/*
 * XREFs of sub_18004EB70 @ 0x18004EB70
 * Callers:
 *     sub_18004D968 @ 0x18004D968 (sub_18004D968.c)
 *     sub_18004DADC @ 0x18004DADC (sub_18004DADC.c)
 *     sub_18004EA68 @ 0x18004EA68 (sub_18004EA68.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18004EB70(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010530(v2);
  return sub_180011B24(a1);
}
