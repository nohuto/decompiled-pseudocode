/*
 * XREFs of sub_140A20648 @ 0x140A20648
 * Callers:
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 * Callees:
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 */

bool __fastcall sub_140A20648(__int64 a1, int *a2)
{
  int v3; // eax
  bool result; // al
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = 0;
  if ( (int)sub_140800ADC(a1, &v5) >= 0
    && (HIDWORD(v5) & 0xF0000000) == 0x10000000
    && (HIDWORD(v5) & 0xF00000) == 0x100000 )
  {
    if ( (HIDWORD(v5) & 0xFFFFF) != 2 )
      return 1;
    if ( !a2 )
      return 1;
    v3 = *a2;
    if ( *a2 == 285212673 || v3 == 301989890 || v3 == 301989892 || v3 == 369098882 )
      return 1;
  }
  return result;
}
