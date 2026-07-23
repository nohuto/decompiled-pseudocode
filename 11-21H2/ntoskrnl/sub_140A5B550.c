/*
 * XREFs of sub_140A5B550 @ 0x140A5B550
 * Callers:
 *     <none>
 * Callees:
 *     sub_140858BAC @ 0x140858BAC (sub_140858BAC.c)
 *     sub_140858BF8 @ 0x140858BF8 (sub_140858BF8.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 *     sub_140B27708 @ 0x140B27708 (sub_140B27708.c)
 */

__int64 __fastcall sub_140A5B550(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      sub_140B27708();
    }
    else if ( a1 == 31 )
    {
      sub_140858BF8();
      sub_140858BAC();
    }
  }
  else
  {
    sub_140B27364(a3);
  }
  return 0LL;
}
