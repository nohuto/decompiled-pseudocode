/*
 * XREFs of sub_140A950A0 @ 0x140A950A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A950A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = sub_140A959C8(a1, a2, a1);
  if ( (_DWORD)result )
    return sub_140A9598C(v3[3], *v3);
  return result;
}
