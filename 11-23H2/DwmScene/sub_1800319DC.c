/*
 * XREFs of sub_1800319DC @ 0x1800319DC
 * Callers:
 *     sub_18002FAEC @ 0x18002FAEC (sub_18002FAEC.c)
 * Callees:
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 */

__int64 __fastcall sub_1800319DC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013348(v2 + 64);
  return sub_180031770(a1);
}
