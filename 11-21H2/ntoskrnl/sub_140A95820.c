/*
 * XREFs of sub_140A95820 @ 0x140A95820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A95904 @ 0x140A95904 (sub_140A95904.c)
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A95820(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140A959C8(a1, a2, a3);
  if ( (_DWORD)result )
  {
    sub_140A95904(a1[4], *a1);
    return sub_140A9598C(a1[2], *a1);
  }
  return result;
}
