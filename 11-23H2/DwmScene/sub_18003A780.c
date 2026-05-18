/*
 * XREFs of sub_18003A780 @ 0x18003A780
 * Callers:
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 * Callees:
 *     sub_18003A7E4 @ 0x18003A7E4 (sub_18003A7E4.c)
 */

__int64 __fastcall sub_18003A780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx

  if ( a3 > 32 )
  {
    v7 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      a1 = sub_18003A7E4(a1, a1 + 512, a4);
      --v7;
    }
    while ( v7 );
  }
  return sub_18003A7E4(a1, a2, a4);
}
