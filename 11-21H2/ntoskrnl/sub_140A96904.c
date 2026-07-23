/*
 * XREFs of sub_140A96904 @ 0x140A96904
 * Callers:
 *     sub_140A7F670 @ 0x140A7F670 (sub_140A7F670.c)
 *     sub_140A96450 @ 0x140A96450 (sub_140A96450.c)
 * Callees:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

char __fastcall sub_140A96904(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = sub_140A97900((int)*a2, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
