/*
 * XREFs of sub_140A94FA0 @ 0x140A94FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A94FA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = sub_140A959C8(a1, a2, a1);
  if ( (_DWORD)result )
    return sub_140A9598C(0LL, *v3);
  return result;
}
