/*
 * XREFs of sub_140A95230 @ 0x140A95230
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 *     sub_140A959C8 @ 0x140A959C8 (sub_140A959C8.c)
 */

__int64 __fastcall sub_140A95230(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  unsigned int v6; // eax

  result = sub_140A959C8(a1, a2, a3);
  if ( (_DWORD)result )
  {
    v5 = a1[6];
    if ( v5 )
    {
      sub_140A9598C(v5, *a1);
      v6 = *((_DWORD *)a1 + 10);
      if ( v6 > 6 && v6 - 32 > 0x1F )
        sub_140A8C924(0xC4u, 0xFCuLL, *a1, a1[5], 0LL);
    }
    sub_140A9598C(a1[4], *a1);
    return sub_140A9598C(a1[2], *a1);
  }
  return result;
}
