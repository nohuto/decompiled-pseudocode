/*
 * XREFs of write_multi_char_0 @ 0x1403E5018
 * Callers:
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 *     sub_1403E7A78 @ 0x1403E7A78 (sub_1403E7A78.c)
 * Callees:
 *     write_char_0 @ 0x1403E4FC8 (write_char_0.c)
 */

int __fastcall write_multi_char_0(char a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  int result; // eax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char_0(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
