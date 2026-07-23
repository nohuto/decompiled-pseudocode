/*
 * XREFs of sub_14045ECC6 @ 0x14045ECC6
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045ECC6(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
