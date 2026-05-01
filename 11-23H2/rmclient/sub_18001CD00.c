/*
 * XREFs of sub_18001CD00 @ 0x18001CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001CD00(__int64 a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 96)) <= 1 )
    __fastfail(0xEu);
  return 2LL;
}
