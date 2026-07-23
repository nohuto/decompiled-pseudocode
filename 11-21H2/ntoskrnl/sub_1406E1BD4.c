/*
 * XREFs of sub_1406E1BD4 @ 0x1406E1BD4
 * Callers:
 *     sub_1406E1A90 @ 0x1406E1A90 (sub_1406E1A90.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 * Callees:
 *     sub_1407E17A4 @ 0x1407E17A4 (sub_1407E17A4.c)
 */

signed __int64 __fastcall sub_1406E1BD4(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      sub_1407E17A4((PVOID)a1);
  }
  return v1;
}
