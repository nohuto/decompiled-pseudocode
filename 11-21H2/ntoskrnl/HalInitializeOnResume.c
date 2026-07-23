/*
 * XREFs of HalInitializeOnResume @ 0x14038D330
 * Callers:
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 * Callees:
 *     sub_1405105D4 @ 0x1405105D4 (sub_1405105D4.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140C4BFC8 )
    return sub_1405105D4();
  return result;
}
