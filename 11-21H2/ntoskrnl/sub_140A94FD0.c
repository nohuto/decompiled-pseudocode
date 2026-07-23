/*
 * XREFs of sub_140A94FD0 @ 0x140A94FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A958B4 @ 0x140A958B4 (sub_140A958B4.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A94FD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = sub_140A959C8(a1, a2, a1);
  if ( (_DWORD)result )
    return sub_140A958B4(v3[1], *v3);
  return result;
}
