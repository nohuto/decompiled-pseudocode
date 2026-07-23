/*
 * XREFs of sub_1403E5070 @ 0x1403E5070
 * Callers:
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 *     sub_1403E7A78 @ 0x1403E7A78 (sub_1403E7A78.c)
 * Callees:
 *     write_char_0 @ 0x1403E4FC8 (write_char_0.c)
 */

int __fastcall sub_1403E5070(char *a1, int a2, FILE *a3, _DWORD *a4)
{
  int result; // eax
  int v7; // ebx

  result = a3->_flag;
  v7 = a2;
  if ( (result & 0x40) == 0 || a3->_base )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char_0(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
