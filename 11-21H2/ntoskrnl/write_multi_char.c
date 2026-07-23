/*
 * XREFs of write_multi_char @ 0x1403E46C0
 * Callers:
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 * Callees:
 *     write_char @ 0x1403E466C (write_char.c)
 */

__int64 __fastcall write_multi_char(unsigned __int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
