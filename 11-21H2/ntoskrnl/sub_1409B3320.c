/*
 * XREFs of sub_1409B3320 @ 0x1409B3320
 * Callers:
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

void __fastcall sub_1409B3320(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    sub_1403606C4(a2);
  }
}
