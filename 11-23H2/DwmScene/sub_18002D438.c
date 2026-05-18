/*
 * XREFs of sub_18002D438 @ 0x18002D438
 * Callers:
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AD28 @ 0x18002AD28 (sub_18002AD28.c)
 *     sub_180073F6C @ 0x180073F6C (sub_180073F6C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18002D438(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1AF286BCA1AF286LL;
  v3 = (0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x1AF286BCA1AF286LL - v3 )
  {
    result = v3 - 0x79435E50D79435E5LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
