/*
 * XREFs of sub_14042D380 @ 0x14042D380
 * Callers:
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 * Callees:
 *     sub_14029AEF0 @ 0x14029AEF0 (sub_14029AEF0.c)
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 */

__int64 __fastcall sub_14042D380()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    sub_14029AEF0(v0 - 128, (__int64)v2);
  return sub_14029B9A0(v0 - 128, v2);
}
