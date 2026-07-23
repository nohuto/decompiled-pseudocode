/*
 * XREFs of sub_1407D2A78 @ 0x1407D2A78
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1407D2884 @ 0x1407D2884 (sub_1407D2884.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407D2A78(volatile signed __int64 *a1)
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
