/*
 * XREFs of sub_1403C09F8 @ 0x1403C09F8
 * Callers:
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_140826E04 @ 0x140826E04 (sub_140826E04.c)
 *     sub_140B01314 @ 0x140B01314 (sub_140B01314.c)
 */

__int64 __fastcall sub_1403C09F8(int a1)
{
  __int64 result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case 0:
      return sub_140B01314();
    case 1:
      if ( dword_140C44634 )
        qword_140C44620 = (__int64)sub_1409569C0;
      break;
    case 2:
      return sub_140826E04();
    default:
      __fastfail(5u);
  }
  return result;
}
