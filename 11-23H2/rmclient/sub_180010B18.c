/*
 * XREFs of sub_180010B18 @ 0x180010B18
 * Callers:
 *     HamPopulateActivityProperties @ 0x180006CB0 (HamPopulateActivityProperties.c)
 *     sub_180008150 @ 0x180008150 (sub_180008150.c)
 *     HamHostIdInitializeKey @ 0x180008400 (HamHostIdInitializeKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010B18(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  return result;
}
