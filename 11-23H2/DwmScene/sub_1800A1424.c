/*
 * XREFs of sub_1800A1424 @ 0x1800A1424
 * Callers:
 *     sub_18002C0C0 @ 0x18002C0C0 (sub_18002C0C0.c)
 * Callees:
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 */

__int64 __fastcall sub_1800A1424(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( sub_180057460(a1 + 184) && v1 <= *(_QWORD *)(v3 + 192) )
    return sub_1800A130C(v3, v1, v2);
  else
    return 4LL;
}
