/*
 * XREFs of write_char @ 0x1403E466C
 * Callers:
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 *     write_multi_char @ 0x1403E46C0 (write_multi_char.c)
 *     sub_1403E4718 @ 0x1403E4718 (sub_1403E4718.c)
 * Callees:
 *     sub_1403E57EC @ 0x1403E57EC (sub_1403E57EC.c)
 */

__int64 __fastcall write_char(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    result = sub_1403E57EC();
    if ( (_WORD)result == 0xFFFF && (result = *(unsigned int *)(a2 + 24), (result & 0x20) != 0) )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
