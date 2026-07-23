/*
 * XREFs of sub_1407E3F10 @ 0x1407E3F10
 * Callers:
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 *     sub_1407E1EF8 @ 0x1407E1EF8 (sub_1407E1EF8.c)
 *     sub_1407E1FE0 @ 0x1407E1FE0 (sub_1407E1FE0.c)
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407E3F10(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
