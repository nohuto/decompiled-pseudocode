/*
 * XREFs of DCompositionCreateAnimationStats @ 0x180064410
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 */

__int64 __fastcall DCompositionCreateAnimationStats(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct IDCompositionAnimationStats **v3; // r9

  *a1 = 0LL;
  if ( (unsigned int)dword_1802191E8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1802191E8, 0x200000000000LL, a3, a1) )
    return CAnimationFrameStats::Create(v3);
  else
    return 2147500037LL;
}
