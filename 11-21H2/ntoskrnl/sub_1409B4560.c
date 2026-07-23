/*
 * XREFs of sub_1409B4560 @ 0x1409B4560
 * Callers:
 *     sub_1405A862C @ 0x1405A862C (sub_1405A862C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409B4560(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
