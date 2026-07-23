/*
 * XREFs of sub_14027449C @ 0x14027449C
 * Callers:
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140597FAC @ 0x140597FAC (sub_140597FAC.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14027449C(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    sub_140239060(a1);
  }
  else
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  sub_140274508(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
