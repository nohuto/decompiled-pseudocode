/*
 * XREFs of sub_140A95000 @ 0x140A95000
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A95904 @ 0x140A95904 (sub_140A95904.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A95000(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = sub_140A959C8(a1, a2, a1);
  if ( (_DWORD)result )
    return sub_140A95904(v3[1], *v3);
  return result;
}
