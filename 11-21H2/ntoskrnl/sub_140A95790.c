/*
 * XREFs of sub_140A95790 @ 0x140A95790
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A958B4 @ 0x140A958B4 (sub_140A958B4.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A95790(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140A959C8(a1, a2, a3);
  if ( (_DWORD)result )
  {
    sub_140A958B4(a1[3], *a1);
    return sub_140A958B4(a1[1], *a1);
  }
  return result;
}
