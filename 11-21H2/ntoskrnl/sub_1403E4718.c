/*
 * XREFs of sub_1403E4718 @ 0x1403E4718
 * Callers:
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 * Callees:
 *     write_char @ 0x1403E466C (write_char.c)
 */

__int64 __fastcall sub_1403E4718(unsigned __int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char(*a1++, a3, a4);
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
