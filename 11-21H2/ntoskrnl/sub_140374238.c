/*
 * XREFs of sub_140374238 @ 0x140374238
 * Callers:
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 */

unsigned __int8 __fastcall sub_140374238(__int64 a1)
{
  unsigned __int8 result; // al

  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result )
  {
    if ( result == 1 )
      return (unsigned __int8)sub_14021803C(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16680LL);
  }
  else
  {
    result = a1 + 0x80;
    if ( *((_QWORD *)KeGetCurrentThread() + 68) != a1 - 1664 )
      return sub_140241980(0LL, 0);
  }
  return result;
}
