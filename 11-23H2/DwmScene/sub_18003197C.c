/*
 * XREFs of sub_18003197C @ 0x18003197C
 * Callers:
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 * Callees:
 *     sub_180031B98 @ 0x180031B98 (sub_180031B98.c)
 */

__int64 __fastcall sub_18003197C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180031B98(v2 + 32);
  return sub_1800259F4(a1);
}
