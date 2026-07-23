/*
 * XREFs of sub_140A94A30 @ 0x140A94A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A958B4 @ 0x140A958B4 (sub_140A958B4.c)
 *     sub_140A95904 @ 0x140A95904 (sub_140A95904.c)
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A94A30(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = sub_140A959C8();
  if ( (_DWORD)result )
  {
    sub_140A9598C(a1[11], *a1);
    sub_140A9598C(a1[8], *a1);
    sub_140A9598C(a1[6], *a1);
    sub_140A9598C(a1[5], *a1);
    sub_140A9598C(a1[4], *a1);
    sub_140A9598C(a1[3], *a1);
    sub_140A9598C(a1[2], *a1);
    sub_140A9598C(a1[1], *a1);
    sub_140A958B4(a1[9], *a1);
    return sub_140A95904(a1[10], *a1);
  }
  return result;
}
