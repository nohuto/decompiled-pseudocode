/*
 * XREFs of sub_18008940C @ 0x18008940C
 * Callers:
 *     sub_1800898D0 @ 0x1800898D0 (sub_1800898D0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180089564 @ 0x180089564 (sub_180089564.c)
 */

__int64 *__fastcall sub_18008940C(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax

  v11 = sub_18001C190();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_180089564(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
