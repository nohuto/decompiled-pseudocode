/*
 * XREFs of sub_140557488 @ 0x140557488
 * Callers:
 *     sub_1406D4D48 @ 0x1406D4D48 (sub_1406D4D48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140557488(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
