/*
 * XREFs of sub_1407D27A8 @ 0x1407D27A8
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2138 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1407D25B4 @ 0x1407D25B4 (sub_1407D25B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407D27A8(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
