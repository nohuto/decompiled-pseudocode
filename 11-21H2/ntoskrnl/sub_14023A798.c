/*
 * XREFs of sub_14023A798 @ 0x14023A798
 * Callers:
 *     sub_14067231C @ 0x14067231C (sub_14067231C.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023A798(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
