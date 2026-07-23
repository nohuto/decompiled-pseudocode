/*
 * XREFs of sub_1407E3BE4 @ 0x1407E3BE4
 * Callers:
 *     sub_1406E73B0 @ 0x1406E73B0 (sub_1406E73B0.c)
 *     sub_1407E17A4 @ 0x1407E17A4 (sub_1407E17A4.c)
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 * Callees:
 *     sub_1406E62A8 @ 0x1406E62A8 (sub_1406E62A8.c)
 */

signed __int64 __fastcall sub_1407E3BE4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406E62A8(a1, (_QWORD *)a2);
  }
  return v2;
}
