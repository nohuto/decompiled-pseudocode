/*
 * XREFs of sub_140A94940 @ 0x140A94940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A94940(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = sub_140A959C8();
  if ( (_DWORD)result )
  {
    sub_140A9598C(a1[4], *a1);
    sub_140A9598C(a1[2], *a1);
    return sub_140A9598C(a1[1], *a1);
  }
  return result;
}
