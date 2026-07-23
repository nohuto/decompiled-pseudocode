/*
 * XREFs of sub_1404593D2 @ 0x1404593D2
 * Callers:
 *     sub_14051D1A0 @ 0x14051D1A0 (sub_14051D1A0.c)
 *     sub_14051D410 @ 0x14051D410 (sub_14051D410.c)
 *     sub_14051D768 @ 0x14051D768 (sub_14051D768.c)
 *     sub_14051DAC0 @ 0x14051DAC0 (sub_14051DAC0.c)
 *     sub_140909678 @ 0x140909678 (sub_140909678.c)
 *     sub_140909764 @ 0x140909764 (sub_140909764.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14051D4F4 @ 0x14051D4F4 (sub_14051D4F4.c)
 */

LONG __fastcall sub_1404593D2(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( (_BYTE)a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return sub_14051D4F4(a1, a2, 0LL);
      }
    }
  }
  return result;
}
